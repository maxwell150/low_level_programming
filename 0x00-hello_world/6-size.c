#include <stdio.h>
/**
* main - prints size
*Description: prints size of the various variables in c in bytes
*Return: 0
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d  byte(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
