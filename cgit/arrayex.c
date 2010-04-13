#include <stdio.h>
main()
{
int a[5];
int i;
for(i = 0;i<5;i++)
{
a[i]=i;
}

for(i = 0;i<5;i++)
{
printf("value in array %d\n", a[i]);
}

for(i = 0;i<5;i++)
{
printf("value in array %d and address is %16lu\n",a[i],&a[i]);
}
}

