#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
int num_digits = 1;
int temp = n;
if (n < 0) 
{
_putchar('-');
temp = -n;
}
while (temp >= 10)}
{
num_digits *= 10;
temp /= 10;
}
while (num_digits >= 1) {
_putchar((n / num_digits) + '0');
n %= num_digits;
num_digits /= 10;
}
}
