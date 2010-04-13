#include <stdio.h>

void main() {
int number = 123;
int reversedNumber = 0;
int temp = 0;

temp = number;

do
{
reversedNumber = 10 * reversedNumber + temp % 10;
temp = temp/10;
} while (temp);

printf ("\nThe number %d reversed is %d rebmun ehT\n", number, reversedNumber);
}
