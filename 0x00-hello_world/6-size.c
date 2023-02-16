#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return 0 (success)
 */
int main(void)
{
printf("side of char: %zu byte(s)\n", sizeof(char));
printf("side of int: %zu byte(s)\n", sizeof(int));
printf("side of long int: %zu byte(s)\n", sizeof(long int));
printf("side of long long int: %zu byte(s)\n", sizeof(long long int));
printf("side of float: %zu byte(s)\n", sizeof(float));
return (0);
}
