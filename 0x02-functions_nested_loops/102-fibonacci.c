#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int fib1 = 1, fib2 = 2, fib3;
printf("%ld, %ld", fib1, fib2);
for (i = 0; i < 48; i++)
{
fib3 = fib1 + fib2;
printf(", %ld", fib3);
fib1 = fib2;
fib2 = fib3;
}
printf("\n");
return (0);
}
