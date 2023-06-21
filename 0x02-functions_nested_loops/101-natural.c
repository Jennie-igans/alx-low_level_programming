#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
*/

int main(void)

{
int k, j = 0;

while (k < 1024)
{
if ((k % 3 == 0) || (k % 5 == 0))
{
j += k;
}
k++;
}
printf("%d\n", j);
return (0);
}
