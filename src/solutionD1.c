#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//53651

int updateDigit(char string[], bool *digitFound, char value) {
  string[0] = value;
  *digitFound = true;
  return 0;
}

int main() {
  FILE *fptr;
  fptr = fopen("d1Input", "r");
  int sum = 0;
  int count = 0;

  if (fptr != NULL) {
    char c;
    char twoDigitNum[2];
    bool firstFound = false;
    bool secondFound = false;

    while ((c = fgetc(fptr)) != EOF) {
      switch (c) {
      case '\n':
        if (secondFound) {
          sum += atoi(twoDigitNum);
        } else {
          twoDigitNum[1] = twoDigitNum[0];
          sum += atoi(twoDigitNum);
        }
        firstFound = false;
        secondFound = false;
        break;
      case '0':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '1':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '2':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '3':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '4':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '5':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '6':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '7':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '8':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      case '9':
        if (firstFound) {
          updateDigit(&twoDigitNum[1], &secondFound, c);
          break;
        }
        updateDigit(twoDigitNum, &firstFound, c);
        break;
      };
    }

    fclose(fptr);
  }

  printf("Total sum is: %d \n", sum);

  return 0;
}
