#include "main.h"


    char *str;

    str = "0123456789";
    puts2(str);
    str = "666";
    puts2(str);
    str = "#";
    puts2(str);
    str = "";
    puts2(str);
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
