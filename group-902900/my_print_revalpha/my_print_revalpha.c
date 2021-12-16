/*
** ETNA PROJECT, 18/10/2021 by badaro_a
** my_print_revalpha
** File description:
**      my_print_revalpha.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_print_revalpha(void)
{
    for (char c='z' ; c>='a'; c--)
        my_putchar(c);
        }
    
