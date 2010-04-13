#include <stdio.h>

main() {
int i = 10;

{
int i = 0;
for(i=0;i<2;i++)
{
printf("value of i is %d\n",i);
}
}
printf("value of i is %d\n",i);
}
