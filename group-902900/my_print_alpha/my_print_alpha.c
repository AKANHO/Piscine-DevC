/*
** ETNA PROJECT, 18/10/2021 by badaro_a
** my_print_alpha
** File description:
**      my_print_alpha.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_print_alpha(void)
{
    for (char c='a' ; c<='z'; c++)
        
    my_putchar (c);
        
    my_putchar ('\n');
                
}
