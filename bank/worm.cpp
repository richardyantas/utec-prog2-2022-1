#include <bits/stdc++.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
// the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
#define BOLDBLACK "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED "\033[1m\033[31m"     /* Bold Red */
#define BOLDGREEN "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW "\033[1m\033[33m"  /* Bold Yellow */
#define BOLDBLUE "\033[1m\033[34m"    /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
#define BOLDCYAN "\033[1m\033[36m"    /* Bold Cyan */
#define BOLDWHITE "\033[1m\033[37m"   /* Bold White */

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

class Worm {
    int size;
    int x;
    int y;
    int head;
    int xo;
    int yo;
    int apple;
    int score;
    vector<int> body;

  public:
    Worm(int _size = 1) {
        score = 0;
        size  = _size;
        x     = 1;
        y     = 1;
        xo    = rand() % 78;
        yo    = rand() % 21;
        head  = x + 80 * (y - 1);
        apple = xo + 80 * (yo - 1);
        body.push_back(head);
    }

    void update() {
        char c = keypress();
        switch (c) {
        case 'w':
            y = max(1, y - 1);
            break;
        case 's':
            y = min(22, y + 1);
            break;
        case 'a':
            x = max(1, x - 1);
            break;
        case 'd':
            x = min(79, x + 1);
            break;
        case 'q':
            exit(0);
            break;
        default:
            break;
        }
        head = x + 80 * (y - 1);
        if (head == apple) {
            score += 1;
            xo    = rand() % 78 + 1;
            yo    = rand() % 21 + 1;
            apple = xo + 80 * (yo - 1);
        }
    }

    void render(string &env) {
        // state = x + 80*(y-1);
        env[head]  = '@'; // char(1); // '@'
        env[apple] = 'o';

        for (int k = 0; k < 1761; k++) {
            if (k == head) {
                cout << CYAN;
                cout << (k % 80 ? env[k] : char(10));
                cout << BLACK;
            } else if (k == apple) {
                cout << RED;
                cout << (k % 80 ? env[k] : char(10));
                cout << BLACK;
            } else {
                cout << (k % 80 ? env[k] : char(10));
            }
        }
    }

    int get_x() { return x; }
    int get_y() { return y; }

    int get_apple() { return apple; }
    int get_score() { return score; }
};

bool welcome(string &env) {
    bool start = false;
    while (!start) {
        // welcome(env);
        env.insert(800, "Welcome");
        start = true;
    }
    // show menu
    char c  = keypress();
    int num = 0;
    switch (c) {
    case KEY_DOWN:
        num += 1;
        break;
    case KEY_UP:
        num -= 1;
        break;
    default:
        break;
    }
}

void gameover(string &env) {}

int main() {
    string env(1760, '.');
    string score(200, ' ');
    // string env(1760,char(32));
    bool start = false;

    Worm worm;
    cout << "\x1b[2J"; // test on console cling
    cout << "\x1b[H"; // test on console cling -> cout << "\x1b[2J" << "\x1b[H";
                      // // test on cling !
    // define clear cout << "\x1b[2J" << "\x1b[H";   // on cling

    worm.render(env);
    for (; start;) {
        score.assign(200, ' ');
        env.assign(1760, '.'); // '.'
        worm.update();
        cout << "\x1b[H";
        worm.render(env);
        string pos = to_string(worm.get_x()) + "," + to_string(worm.get_y());
        score.replace(0, pos.size(), pos);
        cout << RED;
        cout << score[0];
        for (int i = 1; i < score.size(); i++) {
            cout << ((i % 80) ? score[i] : char(10));
        }
        cout << WHITE << endl;
        cout << "┏───────────┓" << endl;
        cout << "│ life:   3 │" << endl;
        cout << "│ score: 25 │" << worm.get_score() << endl;
        cout << "└───────────┛" << endl;
        cout << BLACK << endl;
    }
    return 0;
}