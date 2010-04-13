#include<stdio.h>
#include<string.h>

int main(void) {
char s[80];

printf("Enter password: ");
gets(s);
if(strcmp(s, "pass")) {
printf("invalid password\n");
return 0;
}
return 1;
}
