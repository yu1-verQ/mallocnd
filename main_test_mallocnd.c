#include <stdio.h>

#include "mallocnd.h"


#define N 2


int main ( void ) {
  double *arr;
  int i, j, k, l, m;
  int numIndex = 1;
  int index[ numIndex ];

  for ( i = 0; i < numIndex; i++) {
    index[i] = N;
  }

  arr = mallocnd( sizeof( double ), numIndex, index);

  printf("&arr: %p\n", &arr);
  for ( i = 0; i < index[0]; i++ ) {
    printf("&arr[%d]: %p\n", i, &arr[i]);
  }

  /* printf("&arr: %p\n", &arr); */
  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   printf("&arr[%d]: %p\n", i, &arr[i]); */
  /* } */
  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   for ( j = 0; j < index[1]; j++ ) { */
  /*      printf("&arr[%d][%d]: %p\n", i, j, &arr[i][j]); */
  /*   } */
  /* } */

  /* printf("&arr: %p\n", &arr); */
  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   printf("&arr[%d]: %p\n", i, &arr[i]); */
  /* } */
  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   for ( j = 0; j < index[1]; j++ ) { */
  /*      printf("&arr[%d][%d]: %p\n", i, j, &arr[i][j]); */
  /*   } */
  /* } */
  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   for ( j = 0; j < index[1]; j++ ) { */
  /*      for ( k = 0; k < index[2]; k++ ) { */
  /*        printf("&arr[%d][%d][%d]: %p\n",i,j,k, &arr[i][j][k]); */
  /*      } */
  /*   } */
  /* } */

  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   for ( j = 0; j < index[1]; j++ ) { */
  /*      for ( k = 0; k < index[2]; k++ ) { */
  /*        for ( l = 0; l < index[3]; l++ ) { */
  /*          printf("&arr[%d][%d][%d][%d]: %p\n", i, j, k, l, &arr[i][j][k][l]); */
  /*        } */
  /*      } */
  /*   } */
  /* } */

  /* for ( i = 0; i < index[0]; i++ ) { */
  /*   for ( j = 0; j < index[1]; j++ ) { */
  /*      for ( k = 0; k < index[2]; k++ ) { */
  /*        for ( l = 0; l < index[3]; l++ ) { */
  /*          for ( m = 0; m < index[4]; m++ ) { */
  /*            printf("&arr[%d][%d][%d][%d][%d]: %p\n", i, j, k, l, m, &(arr[i][j][k][l][m]) ); */
  /*          } */
  /*        } */
  /*      } */
  /*   } */
  /* } */


  return 0;
}
