#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive
 * @argc: a function that counts
 * @argv: a function of arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!atoi(argv[1]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);

	}
	return (0);
}
