#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int num1 = 0, num2 = 1, next_num;

for (i = 0; i < 50; i++)
{
if (i < 2)
next_num = i;
else
{
next_num = num1 + num2;
num1 = num2;
num2 = next_num;
}
printf("%ld", next_num);
if (i != 49)
printf(", ");
}
printf("\n");
return (0);
}
