#include <bits/stdc++.h>
#define ESC 27
#define ENTER 13

using namespace std;

char keypress() {
    system("/bin/stty raw");
    char c;
    system("/bin/stty -echo");
    c = getc(stdin);
    system("/bin/stty echo");
    system("/bin/stty cooked");
    return c;
}

void add_text(string &screen, const string &text, int x, int y) {
    int start = x + (21 - y) * 81;
    for (int i = start; i < start + text.size(); i++) {
        screen[i] = text[i - start];
    }
}

void update_screen(string &screen) {
    for (int i = 0; i <= screen.size(); i++) {
        if (i % 81 == 0) {
            screen[i] = '\n';
        }
    }
}

void screen_wrapper(string screen, int width, int height) {
    const char *HORZ  = "─"; // HORiZontal line
    const char *VERT  = "│"; // VERTical line
    const char *TL    = "┌"; // Top Left
    const char *TR    = "┐"; // Top Right
    const char *BL    = "└"; // Bottom Left
    const char *BR    = "┘"; // Bottom Right
    std::string line1 = TL;
    std::string line3 = BL;
    for (int n = 0; n < width; ++n) {
        line1 += HORZ;
        line3 += HORZ;
    }
    line1 += TR;
    line3 += BR;
    std::cout << line1;
    for (int i = 0; i < screen.size(); ++i) {
        if (screen[i + 1] == '\n') {
            cout << screen[i];
            cout << VERT;
        } else if (screen[i] == '\n') {
            cout << screen[i];
            cout << VERT;
        } else {
            cout << screen[i];
        }
    }
    cout << VERT << '\n';
    // std::string line2 = VERT + std::string(text) + VERT;
    std::cout << line3 << '\n';
}

void square_wrapper(string text) {
    const char *HORZ = "─"; // HORiZontal line
    const char *VERT = "│"; // VERTical line
    const char *TL   = "┌"; // Top Left
    const char *TR   = "┐"; // Top Right
    const char *BL   = "└"; // Bottom Left
    const char *BR   = "┘"; // Bottom Right

    std::string line1 = TL;
    std::string line3 = BL;
    for (int n = 0; n < text.size(); ++n) {
        line1 += HORZ;
        line3 += HORZ;
    }
    line1 += TR;
    line3 += BR;
    std::string line2 = VERT + std::string(text) + VERT;
    std::cout << line1 << '\n' << line2 << '\n' << line3 << '\n';
}

// void screen1(string &screen, string &name, char c) {
// }

int main() {
    string screen;
    int size = 81 * 21;
    //  /n   ó   cout << endl
    screen.assign(size, '*');
    update_screen(screen);
    add_text(screen, "[ Welcome Utec 2022 ]", 38, 16);
    add_text(screen, "Enter Name:  ", 29, 14);
    add_text(screen, "PRESS Enter to continue or Esc to Exit!", 28, 12);
    string name(20, ' ');
    int i = 0;
    cout << "\x1b[2J"; // test on console cling
    cout << "\x1b[H"; // test on console cling -> cout << "\x1b[2J" << "\x1b[H";
    // square_wrapper(screen);
    screen_wrapper(screen, 80, 20);
    bool start = false, menu = false;

    // cout << screen << endl;
    while (1) {
        screen.assign(81 * 21, '*');
        update_screen(screen);

        char c = keypress();
        if (c == ESC) {
            break;
        }
        if (!menu) {
            if (c == ENTER && name[0] != ' ') {
                menu = true;
                add_text(screen, "[ Rooms]", 38, 16);
                add_text(screen, "Room 1:  ", 29, 14);
                add_text(screen, "Room 2:  ", 29, 13);
                add_text(screen, "Room 3:  ", 29, 12);
                add_text(screen, "Room 4:  ", 29, 11);
                cout << "\x1b[H";
                // start
            } else if (c == ENTER && name[0] == ' ') {
                // warning
                add_text(screen, "WARNING enter name!", 42, 10);
            } else if (c) {
                name[i++] = c;
            } else {
                continue;
            }
            add_text(screen, "[ Welcome Utec 2022 ]", 38, 16);
            add_text(screen, "Enter Name:  ", 29, 14);
            add_text(screen, "PRESS Enter to continue or Esc to Exit!", 28, 12);
            cout << "\x1b[H";
            add_text(screen, name, 42, 14);
        } else {
            add_text(screen, "[ Rooms]", 38, 16);
            add_text(screen, "Room 1:  ", 29, 14);
            add_text(screen, "Room 2:  ", 29, 13);
            add_text(screen, "Room 3:  ", 29, 12);
            add_text(screen, "Room 4:  ", 29, 11);
            cout << "\x1b[H";
        }

        // if (c ) // si se ingreso el nombre y presiono enter inicia el juego

        // cout << screen << endl;
        screen_wrapper(screen, 80, 20);
    }
    cout << "breaked" << endl;
    return 0;
}