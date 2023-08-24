/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character if it's a letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		/* Check for separators and capitalize the next character */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
		}
	}

	return (str);
}
