#include <bits/stdc++.h>
// #include <pthread.h>
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

// g++ -pthread worm.cpp && ./a.out
// g++ -pthread worm.cpp && ./a.out

char keypress() {
    system("/bin/stty raw");
    char c;
    system("/bin/stty -echo");
    c = getc(stdin);
    system("/bin/stty echo");
    system("/bin/stty cooked");
    return c;
}

int x_obj = 25;
int y_obj = 25;

class Worm {
  public:
    int size;
    int x;
    int y;
    Worm(int _size = 1) {
        size = _size;
        x    = 40;
        y    = 20;
    }
    void render(char env[]) {
        int k, pos = x + 80 * y;
        env[pos] = '@';
        for (k = 0; k < 1761; k++) {
            if (k == pos) {
                cout << RED;
                putchar(k % 80 ? env[k] : 10);
                cout << RESET << endl;
            } else {
                putchar(k % 80 ? env[k] : 10);
            }
        }
        cout << RED << x << "," << y << RESET << endl;
    }

    void update() {
        char c = keypress();
        // cout << c << endl;
        switch (c) {
        case 'w':
            y = max(0, y - 1);
            break;
        case 's':
            y = min(21, y + 1);
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
        // x++;
        // if(x==x_obj && y==y_obj){
        //   size++;
        // }
    }
};

int main() {
    float i, j;
    float z[1760];
    char env[1760];
    printf("\x1b[2J");
    int o;
    Worm worm;
    memset(env, '.', 1760); // 32
    printf("\x1b[H");
    worm.render(env);
    for (;;) {
        memset(env, '.', 1760); // 32
        worm.update();
        printf("\x1b[H");
        worm.render(env);
    }
    return 0;
}

// static volatile bool keep_running = true;
// static void* userInput_thread(void*){
//     // while(keep_running) {
//     //     if ( KEY_UP == keypress() ){ // opt == 'q'
//     //         x++;
//     //         keep_running = false;
//     //     }
//     // }
// }

// pthread_t tId;
// (void) pthread_create(&tId, 0, userInput_thread, 0);