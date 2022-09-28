#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- assignsrandom numbers to n
 * each time it is executed and prints
 * if n is negative or positive
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  printf("%d is positive\n", n);
	else if (n == 0)
	  printf("%d is zero\n", n);
	else if (n < 0)
	  printf("%d is negative\n", n);
	return (0);
}
