#include <stdio.h>

void main(){
  int *intPtr;
  char *charPtr;
  double *doublePtr;
  // Output on a 32-bit system:
  // Size of int pointer: 4 bytes
  // Size of char pointer: 4 bytes
  // Size of double pointer: 4 bytes
  printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
  printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
  printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
  // Output on a 64-bit system:
  // Size of int pointer: 8 bytes
  // Size of char pointer: 8 bytes
  // Size of double pointer: 8 bytes
}