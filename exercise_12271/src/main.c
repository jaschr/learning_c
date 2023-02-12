/* Input and output your name, address, and age to an appropriate structure. */
#include <stdio.h>
#include <stdlib.h>

typedef struct info {
  char name[100];
  char address[100];
  int age;
} info_t;

int main(void) {
  struct info person;

  printf("Enter name: ");
  scanf("%[^\n]s", person.name);
  printf("Enter address: ");
  scanf(" %[^\n]s", person.address);
  printf("Enter age: ");
  scanf("%d", &person.age);

  printf("You are %s.\n", person.name);
  printf("You live at %s.\n", person.address);
  printf("And you are %d years old.\n", person.age);

  return 0;
}
