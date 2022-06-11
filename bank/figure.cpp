#include <iostream>
#include <string>
using namespace std;

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

int main() { square_wrapper(" Welcome Utec 2022 Score: 20 "); }