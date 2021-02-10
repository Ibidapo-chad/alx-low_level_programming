#include "holberton.h"

int main(){
  /* Declare variable i and array name */
  int i;
  int name[10] = {'h','o','l','b','e','r','t','o','n'};
  for (i = 0; name[i] <= 8; i++)
  {
    _putchar(name[i]);
  }
  _putchar('\n');
  return (0);
}
