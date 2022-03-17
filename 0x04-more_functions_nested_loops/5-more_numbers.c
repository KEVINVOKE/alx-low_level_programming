#include "main.h"
/**
*more-numbers - prints 0 - 14
*Return: Always (0)
*/
void more_members(void)
{
int n, i;
for (n = 0; n <= 14; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
else
{
_putchar(i % 10 + '0');
}
}
_putchar('\n');
}
}
