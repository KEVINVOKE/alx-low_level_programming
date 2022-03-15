#include <stdio.h>
/**
*main - prints fibonacci numbers
*Return: 0
*/
int main(void)
{
int num, num2, i, n;
int next_num;
n = 98;
for (i = 1; i <= n; i++)
{
if (i == 98)
{
printf("%d, ", num2);
}
else
{
printf("%d, ", num2);
next_num = num2 + num2;
num2 = num2;
num2 = next_num;
}
}
printf("\n");
return (0);
}
