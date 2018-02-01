#include "holberton.h"

/**
 * rot13 - encodes string into rot13
 * @str: string to be encoded
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	unsigned char crypt[256];

	for (i = 0; i < 256; i++)
	{
		crypt[i] = i;
		if ((i >= 65 && i <= 77) || (i >= 97 && i <= 109))
			crypt[i] = i + 13;

	}

	crypt[78] -= 13; crypt[110] -= 13;
	crypt[79] -= 13; crypt[111] -= 13;
	crypt[80] -= 13; crypt[112] -= 13;
	crypt[81] -= 13; crypt[113] -= 13;
	crypt[82] -= 13; crypt[114] -= 13;
	crypt[83] -= 13; crypt[115] -= 13;
	crypt[84] -= 13; crypt[116] -= 13;
	crypt[85] -= 13; crypt[117] -= 13;
	crypt[86] -= 13; crypt[118] -= 13;
	crypt[87] -= 13; crypt[119] -= 13;
	crypt[88] -= 13; crypt[120] -= 13;
	crypt[89] -= 13; crypt[121] -= 13;
	crypt[90] -= 13; crypt[122] -= 13;

	for (i = 0; str[i] != '\0'; i++)
		str[i] = crypt[(int)str[i]];

	return (str);
}
