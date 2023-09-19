#include "main.h"
/**
 * main - main function to test
 *
 * Return: 0 success
 */
int main(void)
{
	int len;
    	int len2;
        len = _myprintf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("Return value of _myprintf: %d\n", len);
	printf("Return value of printf: %d\n", len2);

	_myprintf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
