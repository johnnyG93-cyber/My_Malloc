#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 8 to test a block split and reuse\n");

  char * ptr1 = ( char * ) malloc( 3072 );

  free( ptr1 );

  char * ptr2 = ( char * ) malloc( 1024 );

  free( ptr2 );

  char * ptr3 = ( char * ) malloc( 1024 );

  free( ptr3 );

  char * ptr4 = ( char * ) malloc( 2048 );

  free( ptr4 );

  return 0;
}
