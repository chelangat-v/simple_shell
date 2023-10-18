#include main.h

/**
 * Author: Vicky Chelangat
 * _putchar.c writes char c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error return -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
