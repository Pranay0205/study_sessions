#include <string.h>

#define MAX_BUFFER_SIZE 64

typedef struct {
  size_t length;
  char buffer[64];
} TextBuffer;

int smart_append(TextBuffer* dest, const char* src) {
  if (src == NULL){
    return 1;
  }

  int src_len = strlen(src);

  int remaining_space = MAX_BUFFER_SIZE - dest->length - 1;

  if(src_len > remaining_space){
    strncat(dest->buffer, src, remaining_space);
    dest->length +=  remaining_space;
    return 1;
  }

  strcat(dest->buffer, src);
  dest->length += src_len;    
  return 0;
  
}


int main(int argc, char *argv[]) {
  // Add Test Case For smart_append
  TextBuffer buffer = {sizeof(buffer.buffer), "This is a test string that is too long for the buffer."};
  // const char *str1 = "Hello, ";
  const char *str2 = "World! This is a test string that is too long for the buffer.";
  const char *str3 = " This is a test string that is too long for the buffer.";
  


  // smart_append(&buffer, str1);
  // printf("Buffer after appending '%s': %s\n", str1, buffer.buffer);
  smart_append(&buffer, str2);
  printf("Buffer after appending '%s': %s\n", str2, buffer.buffer);
  // smart_append(&buffer, str3);
  // printf("Buffer after appending '%s': %s\n", str3, buffer.buffer);
  // smart_append(&buffer, str4);
  // printf("Buffer after appending '%s': %s\n", str4, buffer.buffer);
  // smart_append(&buffer, str5);
  // printf("Buffer after appending '%s': %s\n", str5, buffer.buffer);
  printf("Final buffer content: %s\n", buffer.buffer);
  printf("Final buffer length: %zu\n", buffer.length);
  printf("Final buffer size: %zu\n", sizeof(buffer.buffer));



  return 0; 
}