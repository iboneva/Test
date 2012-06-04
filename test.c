#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char* bufferCursor = "Hello my name is";
  printf("%s\n", bufferCursor);
  


  bufferCursor += sizeof(int);
  *(short*)bufferCursor = (short)'z';
  printf("%s\n", bufferCursor);

  exit(EXIT_SUCCESS);
}
