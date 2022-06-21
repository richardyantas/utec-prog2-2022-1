#pragma once
#include "entity.h"
#include <iostream>
#include <vector>

char keypress() {
    system("/bin/stty raw");
    char c;
    system("/bin/stty -echo");
    c = getc(stdin);
    system("/bin/stty echo");
    system("/bin/stty cooked");
    return c;
}

class Screen {
    int width;
    int height;
    std::string content;

  public:
    Screen(int width = 80, int height = 20) : width(width), height(height) {
        for (int i = 0; i <= content.size(); i++) {
            if (i % 81 == 0) {
                content[i] = '\n';
            }
        }
    };

    void update(const std::vector<Entity> &entities) {
        for (int i = 0; i < entities.size(); i++) {
            entities[i].udpate();
        }
    }

    void insert_shape(const string &shape, int x, int y) {
        int start = x + (21 - y) * 81;
        for (int i = start; i < start + shape.size(); i++) {
            content[i] = shape[i - start];
        }
    }

    void render(const std::vector<Entity> &entities) {
        // cout << "\x1b[2J";

        std::string shape;
        for (int i = 0; i < entities.size(); i++) {
            shape = entities[i].get_shape();
            insert_shape(shape, entities[i].pos.x, entities[i].pos.y);
        }
        cout << content;
        // cout << "\x1b[2J" << content << "\x1b[H";
        // cout << "\x1b[H";
    }
};
