#include "main.h"
#include <stdio.h>
/**
 * rot13 - check the code
 * @s: is a pointer type char
 * Return: the string s
 */
char *rot13(char *s)
{
int a = 0;
while (s[a])
{
while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
{
if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
{
s[a] -= 13;
break;
{
s[a] += 13;
break;
}
a++;
}
return (s);
}
