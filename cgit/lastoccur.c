#include <string.h>
#include <stdio.h>

int main(void){
char *p;

p = strrchr("this is a test\n", 'a');
printf(p);

return 0;
}
