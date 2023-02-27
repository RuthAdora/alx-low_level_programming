#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates keygen.
* Return: 0 Always.
*/
int main(void)
{
int d = 0, o = 0;
time_t c;

srand((unsigned int) time(&c));
while (o < 2772)
{
d = rand() % 128;
if ((o + d) > 2772)
break;
o = o + d;
printf("%o", d);
}
printf("%o\n", (2772 - o));
return (0);
}
