#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 * On erro, -1 is tetruned, and  erro is set appropraitely
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
