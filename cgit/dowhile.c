#include <stdio.h>

int main() {
int temp;
float celsius;
char repeat;

do {
printf("Input a temp yo:");
scanf("%d", &temp);

celsius = (5.0 / 9.0) * ( temp - 32);

printf("%d degrees F = %6.2f degrees celsius\n", temp, celsius);
printf("Continue (y or Y)?");

repeat = getchar();

putchar('\n');
} while(repeat == 'Y' || repeat=='y');
}
