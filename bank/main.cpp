#include "screen.h"
#include <iostream>
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

int main() {
    Screen screen;
    while (1) {
        char c = keypress();
        if (c == ESC) {
            break;
        }
        screen.update(c);
        screen.render()
    }

    return 0;
}