/* Input two numbers and work out their sum, average, and sum of the squares of the numbers */
#include <stdio.h>

int main(void) {
  int num1;
  int num2;

  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  int sum;
  int avg;
  int sqsum;

  sum = num1 + num2;

  avg = sum / 2;

  sqsum = (num1 * num1) + (num2 * num2); 

  printf("Sum: %d\n", sum);
  printf("Average: %d\n", avg);
  printf("Sum of squares: %d\n", sqsum);
}
