#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
*/

int main(void)

{
int p = 0;
long k = 1, j = 2, sum = j;

while (j + k < 4000000)
{
j += k;
if (j % 2 == 0)
sum += j;
k = j - k;
++p;
}
printf("%ld\n", sum);
return (0);
}
