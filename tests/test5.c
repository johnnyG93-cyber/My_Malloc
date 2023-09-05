#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 5 to test a simple malloc and free\n");

  char * ptr1 = ( char * ) malloc ( 65535 );
  free( ptr1 );

  char * ptr2 = ( char * ) malloc ( 46535 );
  free( ptr2 );

  char * ptr3 = ( char * ) malloc ( 50535 );
  free( ptr3 );

  char * ptr4 = ( char * ) malloc ( 30535 );
  free( ptr4 );

  return 0;
}
