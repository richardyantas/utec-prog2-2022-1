#include <bits/stdc++.h>
using namespace std;

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
    int start = x + (21 - y) * 80;
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

int main() {
    string screen;
    int size = 81 * 21;
    //  /n   ó   cout << endl
    screen.assign(size, '*');
    update_screen(screen);
    add_text(screen, "Welcome Utec 2022", 38, 16);
    add_text(screen, "Enter Name:", 30, 15);
    string name(20, ' ');
    int i = 0;
    cout << "\x1b[2J"; // test on console cling
    cout << "\x1b[H"; // test on console cling -> cout << "\x1b[2J" << "\x1b[H";
    cout << screen << endl;
    while (1) {
        char c = keypress();
        if (c == 27) {
            break;
        }
        if (c) {
            name[++i] = c;
        }
        // if (c ) // si se ingreso el nombre y presiono enter inicia el juego
        screen.assign(81 * 21, '*');
        update_screen(screen);
        add_text(screen, "Welcome Utec 2022", 38, 16);
        add_text(screen, "Enter Name:", 30, 15);
        cout << "\x1b[H";
        add_text(screen, name, 42, 15);
        cout << screen << endl;
    }
    cout << "breaked" << endl;
    return 0;
}