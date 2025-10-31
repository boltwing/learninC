#include <stdio.h>
#include <string.h>

int main(void) {
    while (true) {
        char word[128];
        printf("> ");
        scanf("%127s", word);
        if (strcmp(word, "exit") == 0) {
            return 0;
        }
        int count = strlen(word);
        printf("LETTER COUNT = %i\n", count);
    }
}
