#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned int f1 = 1, f2 = 2, f3;

printf("%u, %u", f1, f2);

for (i = 2; i < 98; i++)
{
f3 = f1 + f2;
printf(", %u", f3);
f1 = f2;
f2 = f3;
}
printf("\n");
#return (0);
}
