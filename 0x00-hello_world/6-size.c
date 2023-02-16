#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
printf("side of a char: %lu byte(s)\n", sizeof(char));
printf("side of an int: %lu byte(s)\n", sizeof(int));
printf("side of a long int: %lu byte(s)\n", sizeof(long int));
printf("side of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("side of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
