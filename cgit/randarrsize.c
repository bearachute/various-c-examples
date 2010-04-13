#include <stdio.h>
#include <time.h>

main ()
{
 // seed rand # generator with time and get rand number

srand(time(NULL));
int randomNumber = rand() % 100;

// crate an array of a rand size

int myArray[randomNumber];
printf("Array size: %i slots\n", randomNumber);
}
