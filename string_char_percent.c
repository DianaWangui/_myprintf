#include "main.h"
/**
 * _string - A function that prints a string
 * @args: number of arguemnts
 *
 * Return: number of character count
 */
int _string(va_list args)
{
	char *str = va_arg(args, char *);

	int i, count = 0;

	if (!str)
	{
		str = "(nil)";
	}
	for (i = 0; str[i]; i++)
	{
		putchar(str[i]);
		count++;
	}
	return (count);
}
/**
 * _char - a function that returns a char
 * @chars: arguments
 *
 * Return: number of character
 */
int _char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}
/**
 * _percent - a function to print percentage
 *
 * Return: 1 on success
 */
int _percent(void)
{
	putchar('%');
	return (1);
}
