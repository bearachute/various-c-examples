#include <stdio.h>

int main(){
char *p[10];

*p = "hello";

printf("the address of p is %p\n", &p);
printf("the value of p is %s\n", *p);
printf("the size of p is %d bytes\n", sizeof(p));
return 0;
}

