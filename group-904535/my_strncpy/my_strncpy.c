/*
** ETNA PROJECT, 21/10/2021 by badaro_a
** My_strncpy
** File description:
**      my_strncpy.c
*/

#include <unistd.h>

void my_putchar(char c);

char *my_strncpy(char *dest, const char *src, int n)
{
    int i= 0;
    
    while (i <= n)
        {
            dest[i]=src[i];
            i++;

        }
    
    dest[i]='\0';
    
    return dest;
}
