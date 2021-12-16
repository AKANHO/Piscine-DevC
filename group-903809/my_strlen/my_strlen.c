/*
** ETNA PROJECT, 19/10/2021 by badaro_a
** my_strlen
** File description:
**      my_strlen.c
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(const char *str)
{
    int a = 0 ;

    while (str[a] !='\0')
        {
            a++;
        }
     return a;
}
