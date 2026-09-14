#include <stdio.h>
int main() {
  int number[5];
  printf("Enter 5 integers:\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &number[i]);
  }
  int max = -1;
  int min = 1000000000;

  for (int i = 0; i < 5; i++) {
    if (number[i] > 0) {
      if (number[i] > max) {
        max = number[i];
      }
      if (number[i] < min) {
        min = number[i];
      }
    }
    if (number[i] < min && number[i] < 0) {
      min = number[i];
    }
  }
  printf("Maximum : %d\n", max);
  printf("Minimum : %d\n", min);
  return 0;
}