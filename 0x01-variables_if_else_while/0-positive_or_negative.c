#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints interger n
* Description: prints whether n is +ve or not
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero", n);
	}
	if (n > 0)
	}
		printf("%d is positive\n", n);
	}
	else
	{
		printf"%d is negative\n", n);
	}
	return (0);
}
