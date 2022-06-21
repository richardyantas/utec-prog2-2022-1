// Client side C/C++ program to demonstrate Socket programming
#include <arpa/inet.h>
#include <bits/stdc++.h>
//#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
//#define PORT 8080
//#define PORT 8888
#define PORT 8888

char keypress() {
    system("/bin/stty raw");
    char c;
    system("/bin/stty -echo");
    c = getc(stdin);
    system("/bin/stty echo");
    system("/bin/stty cooked");
    return c;
}

// using namespace std;
int main(int argc, char const *argv[]) {
    int sock = 0, valread, client_fd;
    struct sockaddr_in serv_addr;
    // char *hello       = "Hello from client richard";

    char *data;
    char buffer[1024] = {0};

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("\n Socket creation error \n");
        return -1;
    }
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port   = htons(PORT);
    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }

    if ((client_fd = connect(sock, (struct sockaddr *)&serv_addr,
                             sizeof(serv_addr))) < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }

    buffer[1024]    = {0};
    valread         = read(sock, buffer, 1024);
    buffer[valread] = '\0';
    printf("%s\n", buffer);

    for (;;) {
        // scanf("%s", data); //  add getch
        char key = keypress();
        if (key == 27) {
            break;
        }
        data = &key;
        send(sock, data, strlen(data), 0);
        // printf("Hello message sent\n");
        buffer[1024]    = {0};
        valread         = read(sock, buffer, 1024);
        buffer[valread] = '\0';
        printf("%c\n", buffer[0]);
        // closing the connected socket
    }
    close(client_fd);
    return 0;
}