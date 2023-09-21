<<<<<<< HEAD
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i;


for (i = 0; s[i] != '\0'; i++)
{
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= 32;
}
}

return (s);
=======
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
	if (str == NULL)
		return NULL;

	bool new_word = true;

	while (*str != '\0')
	{
		/* Check if the current character is a word separator */
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
		    *str == ',' || *str == ';' || *str == '.' ||
		    *str == '!' || *str == '?' || *str == '"' ||
		    *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			new_word = true;
		}
		/* Check if the current character is a letter */
		else if (isalpha(*str))
		{
			if (new_word)
			{
				/* Capitalize the first letter of the word */
				*str = toupper(*str);
				new_word = false;
			}
			else
			{
				/* Convert the letter to lowercase */
				*str = tolower(*str);
			}
		}

		str++;
	}

	return str;
}

int main()
{
    char myString[] = "hello, world! this is a test string.";
    
    printf("Before: %s\n", myString);
    cap_string(myString);
    printf("After: %s\n", myString);
    
    return 0;
>>>>>>> a3605877380ea148b8505beea6fa84cca8574171
}
