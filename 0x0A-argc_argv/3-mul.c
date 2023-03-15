#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints multiple of two numbers
 * @argc: a function that counts
 * @argv: a function that stores argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, mu;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mu = num1 * num2;
		printf("%d\n", mu);
	}
	return (0);

}

