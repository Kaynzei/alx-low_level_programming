#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a sentence before the main execution
 * 
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

