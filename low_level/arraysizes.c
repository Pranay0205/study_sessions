#include <stdio.h>

void main(){
  int intArray[10];
  char charArray[10];
  double doubleArray[10];
  printf("Size of int array: %zu bytes\n", sizeof(intArray));
  printf("Size of char array: %zu bytes\n", sizeof(charArray));
  printf("Size of double array: %zu bytes\n", sizeof(doubleArray));
  // Size of int array: 40 bytes
  // Size of char array: 10 bytes
  // Size of double array: 80 bytes
}