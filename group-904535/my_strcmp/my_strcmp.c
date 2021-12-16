/*
** ETNA PROJECT, 21/10/2021 by badaro_a
** my_strcmp/
** File description:
**      my_strcmp.c
*/

#include <unistd.h>

void my_putchar(char c);

int my_strcmp(const char *s1, const char *s2)
{
    int i;
    int my_strcmp= 0;
    { for (i = 0 ; s1[i]&& s2[i]!= '\0'; i++)
            {
                if (s1[i]!= s2[i])
                    {
                       my_strcmp = 1;
                       
                       printf("%s\n");
                       
                       return 1 ;
                    }
            }
    }
}
