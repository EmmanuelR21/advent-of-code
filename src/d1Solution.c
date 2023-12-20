#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int updateDigit(int *digitToChange, bool *digitFound, char value) {
  *digitToChange = atoi(&value);
  *digitFound = true;
  return 0;
}

int main() {
  FILE *fptr;
  fptr = fopen("d1Input", "r");

  if (fptr != NULL) {
    char c;
    int sum = 0;
    int firstDigit;
    bool firstFound = false;

    while ((c = fgetc(fptr)) != EOF) {
      switch (c) {
      case '0':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '1':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '2':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '3':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '4':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '5':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '6':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '7':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '8':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      case '9':
        if (firstFound)
          break;
        updateDigit(&firstDigit, &firstFound, c);
        break;
      };

      if (c == '\n') {
        printf("\t firstDigit: %d", firstDigit);
      }
    }

    fclose(fptr);
  } else
    printf("error opening file!\n");

  return 0;
}
