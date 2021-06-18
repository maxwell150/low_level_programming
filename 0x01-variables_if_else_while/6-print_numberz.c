#include <stdio.h>

/**
* main - prints int
* Description: n.o are under 10 without using any char vars
*
* Return: 0
*/
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
