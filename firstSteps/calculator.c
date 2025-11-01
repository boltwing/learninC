#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for atoi()
#include <stdbool.h>

// VERSION = 0.2

void input(const char *message, char *out) {
  printf("%s", message);
  scanf("%127s", out);

  if (strcmp(out, "exit") == 0) exit(0);
}

int main(void) {
  char userInput[128];
  char op[8];
  int x, y, result;

  while (true) {
    input("x = ", userInput);
    x = atoi(userInput);
    
    input("y = ", userInput);
    y = atoi(userInput);

    input("Opperation? (+-*/): ", op);
    if (strcmp(op, "+") == 0) result = x + y;
    else if (strcmp(op, "-") == 0) result = x - y;
    else if (strcmp(op, "*") == 0) result = x * y;
    else if (strcmp(op, "/") == 0) result = x / y;
    else {
      printf("Invalid opperation.\n");
      continue;
    }

    printf("=> %d\n", result);
  }
}
