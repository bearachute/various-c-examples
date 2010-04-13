#include<stdio.h>
#include<stdlib.h>
main(){
int x, *p;

p = &x; /* init pointer */
*p = 10; /* set x to zero */

printf("the address of p is %p\n", &p);
printf("the value of p is %d\n", *p);
printf("the value of x is %d\n", x);
*p += 1;
printf("the new value of p is %d\n", *p);

}
