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
}
