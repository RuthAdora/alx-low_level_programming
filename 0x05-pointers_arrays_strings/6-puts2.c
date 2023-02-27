#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2 - Prints every other character of a string
* starting with the first character
* @str: string to print
* Return:(void)
*/

void puts2(char *str)
{
int longi = 0;
int z = 0;
char *y = str;
int o;

while (*y != '\0')
{
y++;
longi++;
}
z = longi - 1;
for (o = 0 ; o <= z ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
