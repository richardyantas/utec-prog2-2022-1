#include <cstdio>
#include <iostream>
using namespace std;

// int main() {
//     char c = char(254); // 219 220 221 222  223 254
//     printf("%c\n", c);
//     return 0;
// }

// #include <io.h> //For _setmode
// #include <stdio.h>
// #include <wchar.h>   //For wprintf and wide chars
// #define U_16 0x20000 // U-16 text mode, for the text blocks

// const wchar_t shade_block[] = {L"▒▒██████▒▒\n"
//                                "▒████████▒\n"
//                                "██████████\n"
//                                "▒████████▒\n"
//                                "▒▒██████▒▒\n"};

// int main() {
//     //_setmode(_fileno(stdout), U_16); // set the output mode to U_16
//     wprintf(L"%s\n", shade_block);

//     return 0;
// }

int main() {
    // for (int i = 32; i < 256; i++)
    //     printf("%3d / %02x = %c\n\r", i, i, i);
    char a[] = "\xf3\xef";

    for (int i = 32; i < 256; i++)
        printf("%3d / %02x = %c%s", i, i, i,
               ((i >> 2) << 2 == i) ? "\n\r" : "\t");
}
