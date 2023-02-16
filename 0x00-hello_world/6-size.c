#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
printf("side of char: %lu byte(s)\n", sizeof(char));
printf("side of int: %lu byte(s)\n", sizeof(int));
printf("side of long int: %lu byte(s)\n", sizeof(long int));
printf("side of long long int: %lu byte(s)\n", sizeof(long long int));
printf("side of float: %lu byte(s)\n", sizeof(float));
return (0);
}
