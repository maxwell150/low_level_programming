#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	int no1, no2;

	if (argc == 3)
	{
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		printf("%i\n", no1 * no2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
