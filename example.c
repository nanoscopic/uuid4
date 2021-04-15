#include<stdlib.h>
#include<stdio.h>
#include"uuid.h"

int main(void) {
  char *buf = uuid_generate();
  printf("%s\n", buf);
  free( buf );
  
  return 0;
}
