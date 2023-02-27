#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Returns the lenghth of a string.
 *
 * @str: The string to get length of
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
