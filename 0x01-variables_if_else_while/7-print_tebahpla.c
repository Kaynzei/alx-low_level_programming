#include <stdio.h>
/**
 * main - printing low case alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
