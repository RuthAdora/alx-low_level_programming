#include <stdio.h>
/**
 * main - This program prints the size of various types on the computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
char c;
int i;
long int t;
long long int n;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
