#include <stdio.h>
#include <ctype.h>

int main(void)
{
char ch;

printf("Enter some text (type a period to quit).\n");
do {
ch = getchar();

if(islower(ch))
ch = toupper(ch);
else
ch = tolower(ch);

putchar(ch);
} while (ch != '.');

return 0;
}
