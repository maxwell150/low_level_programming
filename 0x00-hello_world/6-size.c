#include <stdio.h>
/**
* main - prints size
*Description: prints size of the various variables in c in bytes
*Return: 0
*/

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d  byte(s)", sizeof(long int));
	printf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
