#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}

	return (len);
}
