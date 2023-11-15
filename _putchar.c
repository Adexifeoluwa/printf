#include "main.h"
/**
 * write_putchar - To print a character
 * @c: character  input
 * Return: 1
 */

int write_putchar(char c)
{
	return (write(1, &c, 1));
}
