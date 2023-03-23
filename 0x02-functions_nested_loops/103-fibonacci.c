#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms in the Fibonacci sequence
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int term1 = 1, term2 = 2, next, sum = 0;

while (term2 <= 4000000)
{
if (term2 % 2 == 0)
sum += term2;
next = term1 + term2;
term1 = term2;
term2 = next;
}
printf("%d\n", sum);
return (0);
}
