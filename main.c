// Alphabetic macro

#include <stdio.h>

#define IS_UPPER_CASE(x) (x) >= 'A' && (x) <= 'Z' ? 1 : 0
#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))

#define IS_ALPHABETIC(x) IS_UPPER_CASE((x)) || IS_LOWER_CASE((x))

int main(void) {

  printf ("%d\n", IS_ALPHABETIC('d')); // 1 = true
  printf ("%d\n", IS_ALPHABETIC('D')); // 1 = true
  printf ("%d\n", IS_ALPHABETIC('2')); // 0 = false
  printf ("%d\n", IS_ALPHABETIC('@')); // 0 = false

  return 0;
}