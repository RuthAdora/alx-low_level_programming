#include <stdio.h>
/**
 * swap_in - Swaps the value of two integers
 * @n: The first integer to be swapped
 * @n: The second integer to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
