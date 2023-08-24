/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	char *leet_replacements = "aAeEoOtTlL";
	char *leet_characters = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_replacements[j] != '\0'; j++)
		{
			if (str[i] == leet_replacements[j])
			{
				str[i] = leet_characters[j];
				break;
			}
		}
	}

	return (str);
}
