#include "main.h"
/**
 *
 *
 */
int print_num(va_list n)
{
	int num = va_arg(n, int);

	int count = 0;

	count += num_print(num);
	return (count);
}
int num_print(int arg)
{
	int count = 0;

	unsigned int k = arg;

	if (arg < 0)
	{
		putchar('-');
		count++;
		arg *= -1;
		k = arg;
	}
	k /= 10;
	if (k)
		count += num_print(k);
	count += putchar(((unsigned int) arg % 10) + 48);
	return (count);
}
