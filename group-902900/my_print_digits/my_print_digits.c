/*
** ETNA PROJECT, 18/10/2021 by badaro_a
** my_print_digits
** File description:
**      my_print_digits.c
*/

#include <unistd.h>

void my_putchar(char c);

void my_print_digits(void)
{
    for (char c = '0' ; c <= '9'; c++)
        {
            my_putchar (c);
        }

}
