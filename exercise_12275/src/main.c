/* Write a program to read a positive integer at least equal to 3, and print out
 * all possible permutations of three positive integers less or equal to than
 * this value. */
#include <stdio.h>
#define MAX 100

void digit_permutations(int n) {
  printf(
      "TODO: find all permutations of the digits of n that is >= n and print "
      "them out.\n");
}

void get_user_input() {
  printf("Enter an integer with a length of at least 3 digits: ");
  int input;
  scanf("%d", &input);
  if (input <= 99) {
    printf("Not enough digits!\n\n");
    get_user_input();
  } else {
    digit_permutations(input);
  }
}

int main() {
  get_user_input();

  return 0;
}
