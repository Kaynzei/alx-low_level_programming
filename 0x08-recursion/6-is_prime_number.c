/*
 * File: 6-is_prime_number.c
 * Auth: sam tech
 */
#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * if the number is not divisible - 1.
 */
int is_divible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divible(num, div + 1));
}
