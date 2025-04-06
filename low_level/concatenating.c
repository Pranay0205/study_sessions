#include <string.h>
#include <stdio.h>

void concat_strings(char *str1, const char *str2) {
  
 
}

void test_concat_strings() {
  char str1[100] = "Hello";
  const char *str2 = " World";

  printf("Before concatenation: str1 = '%s'\n", str1);
  concat_strings(str1, str2);
  printf("After concatenation: str1 = '%s'\n", str1);
}

int main() {
  test_concat_strings();
  return 0;
}