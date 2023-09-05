
#include <stdlib.h>
#include <stdio.h>

int main()
{

  printf("Running test 7  to test coalesce\n");

  char * ptr1 = ( char * ) malloc ( 1200 );
  char * ptr2 = ( char * ) malloc ( 1200 );

  free( ptr1 );
  free( ptr2 );

  char * ptr3 = ( char * ) malloc ( 2048 );

  free( ptr3 );

  char * ptr4 = ( char * ) malloc ( 650 );

  free( ptr4 );

  char * ptr5 = ( char * ) malloc ( 650 );
  free( ptr5 );

  char * ptr6 = ( char * ) malloc ( 1300 );

  free( ptr6 );

  return 0;
}
