/*
** ETNA PROJECT, 19/10/2021 by badaro_a
** my_putstr
** File description:
**      my_putstr.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_putstr (const char *str)
{
    int a = 0 ;
    
    while (str[a] !='\0')
                          {
                           my_putchar ( str[a]); a++;
                          }
}
