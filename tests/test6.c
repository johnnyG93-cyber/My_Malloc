#include <stdlib.h>
#include <stdio.h>

int main()
{

  printf("Running test 6 to exercise malloc and free\n");

  char * ptr = ( char * ) malloc ( 40535 );

  char * ptr_array[2048];

  int i;
  for ( i = 0; i < 2048; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 1024 );

    ptr_array[i] = ptr_array[i];
  }

  free( ptr );

  for ( i = 0; i < 2048; i++ )
  {
    if( i % 2 == 0 )
    {
      free( ptr_array[i] );
    }
  }

  ptr = ( char * ) malloc ( 50535 );
  free( ptr );

  return 0;
}
