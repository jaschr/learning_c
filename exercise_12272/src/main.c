/* Write a program that works out the largest and smallest values from a set of
 * 10 inputted numbers. */
#include <stdio.h>

int main() {
  int array[11];

  printf("Enter 10 integers:\n");
  int i;

  for (i = 0; i < 10; ++i) {
    printf("%2d> ", i + 1);
    scanf("%d", &array[i]);
  }

  int largest = 0;
  for (i = 0; i < 10; ++i) {
    if (largest < array[i]) {
      largest = array[i];
    }
  }

  int smallest = array[0];
  for (i = 0; i < 10; ++i) {
    if (smallest > array[i]) {
      smallest = array[i];
    }
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}
