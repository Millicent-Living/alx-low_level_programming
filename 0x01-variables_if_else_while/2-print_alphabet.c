#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_bet[ ] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp_bet[i]);
	}
	putchar('\n');
	return (0);
}
