/*
** ETNA PROJECT, 18/10/2021 by badaro_a
** my_iseven
** File description:
**      my_iseven.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_iseven (int n)
{
    if ( n % 2 == 0 )
                     {
                       my_putchar ('E');
                     }
    
    else if  ( n % 3 == 1 )
             {
                 my_putchar ('O');

              }
}
