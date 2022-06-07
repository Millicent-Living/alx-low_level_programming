#include "main.h"
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int num, sz;

	sz = sizeof(str) / sizeof(int);
	for (num = 0; num < sz; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
	return (0);
}
