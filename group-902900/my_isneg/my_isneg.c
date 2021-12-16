/*
** ETNA PROJECT, 18/10/2021 by badaro_a
** my_isneg/
** File description:
**      my_isneg.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_isneg (int n)
{
    if ( n < 0 )
                     {
                       my_putchar ('N');
                     }
    else if ( n >= 0 )
             {
                 my_putchar ('P');

              }
}

