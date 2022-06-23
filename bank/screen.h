

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

class Screen {
    int width;
    int height;
    std::string content;
    enum view { welcome, rooms, start_game, game_over_loose, game_over_win };

  public:
    Screen(int width = 80, int height = 20) : width(width), height(height) {
        content.assign((width + 1) * (height + 1), '*');
        for (int i = 0; i <= content.size(); i++) {
            if (i % 81 == 0) {
                content[i] = '\n';
            }
        }
    };

    void add_text(string &screen, const string &text, int x, int y) {
        int start = x + (21 - y) * 81;
        for (int i = start; i < start + text.size(); i++) {
            screen[i] = text[i - start];
        }
    }

    void update(char c) {
        int view;
        // view = welcome;

        switch (view) {
        case welcome:
            add_text(content, "[ Welcome Utec 2022 ]", 38, 16);
            add_text(content, "Enter Name:  ", 29, 14);
            add_text(content, "PRESS Enter to continue or Esc to Exit!", 28,
                     12);

        case rooms:
            add_text(content, "[ Rooms]", 38, 16);
            add_text(content, "Room 1:  ", 29, 14);
            add_text(content, "Room 2:  ", 29, 13);
            add_text(content, "Room 3:  ", 29, 12);
            add_text(content, "Room 4:  ", 29, 11);
        case start_game:
            continue;
        case game_over_loose:
            continue;
        case game_over_win:
            continue;
        default:
            continue;
        }
    }

    void render() {
        cout << "\x1b[H";
        cout << content;
    }
};