#include "main.h"
#include <stdio.h>
/**
 * _strstr - function 
 * @haystack: the string to search
 * @needle: the string to find
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
while (needle[b] != '\0')
b++;
while (*haystack)
{
for (a = 0; needle[a]; a++)
{
if (haystack[a] != needle[a])
break;
}
if (a !=b)
haystack++;
else
return (haystack);
}
return (NULL);
}
