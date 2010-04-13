#include <stdio.h>
#include <time.h>

#define COUNT 5

main ()
{

srand( time(NULL) );

int stackArray[COUNT];
int i;

// loop and insert ran value
// returned from rand

for (i=0;i<COUNT;i++){
stackArray[i] = rand();
}

// loop through and print array out
// at each slot

for ( i = 0; i < COUNT; i ++ ) {
printf ("Value %i: %i\n", i, stackArray[i]);
}
}
