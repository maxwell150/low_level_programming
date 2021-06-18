#include <stdio.h>

/**
* main - prints numbers
* Description: numbers of base 16 are in lowercase
* Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
