#include <stdio.h>

void main()
{
char multi[] = "I am a string";

printf("\nThe address of the first array element : %p", &multi[0]);
printf("\nThe address obtained from array name: %p\n", multi);
printf("\nThe value of multi is %s\n", multi);
}

