#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11
/**
* main - a program that generates
* random valid password
* Return: (0)
*/
int main(void)
{
char password[PASSWORD_LENGTH];

const char charset[] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

srand(time(NULL));

/* Generate random password */
for (int i = 0; i < PASSWORD_LENGTH - 1; i++)
{
password[i] = charset[rand() % (sizeof(charset) - 1)];
}
password[PASSWORD_LENGTH - 1] = '\0';

/* Print password */
printf("%s\n", password);

return (0);
}
