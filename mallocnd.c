#include <stdlib.h>
#include "mallocnd.h"


static void setPointerForMallocnd(size_t sizeOfType, int numIndex, int *index, int depth, void ****b, void **bLast )
{
  if ( depth == numIndex-2 ) {
    for ( int i = 0; i < index[depth]; i++ ) {
      (*b)[depth][i] = *bLast;
      *bLast += sizeOfType * index[depth+1];
    }
  }else{
    for ( int i = 0; i < index[depth]; i++ ) {
      (*b)[depth][i] = (*b)[depth+1];
      setPointerForMallocnd( sizeOfType, numIndex, index, depth+1, b, bLast );
      (*b)[depth+1] += index[depth+1];
    }
  }
}


void *mallocnd(size_t sizeOfType, int numIndex, int *index ) {
  if ( numIndex < 1 ) {
    return NULL;
  } else if ( numIndex == 1 ) {
    return malloc ( sizeOfType * index[0] );
  } else if ( numIndex > 1 ) {
    void ***b;
    void *bLast;
    size_t fullSize;
    int isbuff1;

    b = malloc ( sizeof ( void* ) * ( numIndex - 1 ) );

    fullSize = sizeOfType * index[numIndex - 1];
    for ( int i = numIndex-2; i >= 0; i-- ) {
      fullSize += sizeof(void*);
      fullSize *= index[i];
    }

    b[0] = (void**)malloc( fullSize );
    if ( b[0] ) {
      for ( int i = 1; i < numIndex-1; i++ ) {
        isbuff1 = 1;
        for ( int j = 0; j < i; j++) {
          isbuff1 *= index[j];
        }
        b[i] = b[i-1] + isbuff1;
      }
      isbuff1 = 1;
      for ( int j = 0; j < numIndex-1; j++) {
        isbuff1 *= index[j];
      }
      bLast = b[numIndex-2] + isbuff1;

      setPointerForMallocnd( sizeOfType, numIndex, index, 0, &b, &bLast );

      return b[0];
    }

    return NULL;
  }
}
