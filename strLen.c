#include "main.h"

/**
 * strLen - get the string length
 * @str: given string
 * Return: string length
*/
int strLen(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
;

return (i);
}


