#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for atoi() 

int input(const char *msg) {
    char userInput[128];
    printf("%s", msg);
    scanf("%s", userInput);
    if (strcmp(userInput, "exit") == 0) {
        return 0;
    }
    // time to conv string to int;
    int no = atoi(userInput);
    return no;
}

int main(void) {
    while (true) {
        int fst; // first
        int sec; // second
        int res; // result
        
        fst = input("first: int = "); // .py format so i don't have to deal with ";"
        sec = input("second: int = ");
        res = fst + sec;
        printf("%d\n", res);
    }
}
