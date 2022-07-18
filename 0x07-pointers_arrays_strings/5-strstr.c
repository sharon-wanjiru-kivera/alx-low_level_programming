#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: the string to search
 * @needle: the string to find
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found. 
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[a]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
