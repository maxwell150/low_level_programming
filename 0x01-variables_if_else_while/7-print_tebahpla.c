#include <stdio.h>

/**
* main - prints alphabet
* Description: alphabet in reverse
* Return: 0
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}

	putchar('\n');
	return (0);
}
