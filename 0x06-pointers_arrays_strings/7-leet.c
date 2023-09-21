<<<<<<< HEAD
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *s)
{
int i, j;
char *letters = "aeotl";
char *nums = "43071";


for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0' && nums[j] != '\0'; j++)
{
if (s[i] == letters[j] || s[i] == letters[j] - 32)
{
s[i] = nums[j];
}
}
}

return (s);
=======
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string
 *
 * Return: A pointer to the resulting encoded string
 */
char *leet(char *str)
{
	if (str == NULL)
		return NULL;

	char *orig_str = str; // Save the original pointer to the string

	while (*str != '\0')
	{
		char c = *str;

		/* Use a single 'if' statement to check and replace characters */
		if (c == 'a' || c == 'A')
			*str = '4';
		else if (c == 'e' || c == 'E')
			*str = '3';
		else if (c == 'o' || c == 'O')
			*str = '0';
		else if (c == 't' || c == 'T')
			*str = '7';
		else if (c == 'l' || c == 'L')
			*str = '1';

		str++;
	}

	return orig_str; // Return the pointer to the original string
}

int main()
{
    char myString[] = "leet programming";
    
    printf("Before: %s\n", myString);
    leet(myString);
    printf("After: %s\n", myString);
    
    return 0;
>>>>>>> a3605877380ea148b8505beea6fa84cca8574171
}
