<<<<<<< HEAD
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
int i;


for (i = 0; s[i] != '\0'; i++)
{

if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}

return (s);
=======
#include <stdio.h>

/**
 * uppercase_string - Changes all lowercase letters of a string to uppercase
 * @str: The input string
 */
void uppercase_string(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			*str = *str - 'a' + 'A';
		}
		str++;
	}
}

int main()
{
    char myString[] = "Hello, World!";
    
    printf("Before: %s\n", myString);
    uppercase_string(myString);
    printf("After: %s\n", myString);
    
    return 0;
>>>>>>> a3605877380ea148b8505beea6fa84cca8574171
}
