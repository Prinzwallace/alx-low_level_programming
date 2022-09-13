#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[4] = "main";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
