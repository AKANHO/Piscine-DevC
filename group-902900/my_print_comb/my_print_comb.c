/*
** ETNA PROJECT, 19/10/2021 by badaro_a
** my_print_comb
** File description:
**      my_print_comb.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_print_comb (void)
{
    int a, b, c;
    for ( a = 0 ; a <= 7; a++)
        {
            for ( b = a + 1; b <= 8; b++)
                {
                    for ( c = b + 1 ; c <= 9; c++)
                    {
                      my_putchar ('0' + a);
                      my_putchar ('0' + b);
                      my_putchar ('0' + c);
                     if (a < 7)
                         {
                        my_putchar (',');
                        my_putchar (' ');
                         }
                    }
                 }
          }
                       
}    
