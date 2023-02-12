/* Write a program to read a "float" representing a number of degrees Celsius,
 * and print as a "float" the equivalent temperature in degrees Fahrenheit.
 * Print your results in a form such as 100.0 degrees Celsius converts to 212.0
 * degrees Fahrenheit. */
#include <stdio.h>

int main() {
  float celsius;
  printf("Enter degrees in Celsius: ");
  scanf("%f", &celsius);
  float fahrenheit = celsius * 9 / 5 + 32;
  printf("%f degrees Celsius converts to %f degrees Fahrenheit.\n", celsius,
         fahrenheit);
}
