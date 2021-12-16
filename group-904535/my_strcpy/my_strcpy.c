/*
** ETNA PROJECT, 20/10/2021 by badaro_a
** my_strcpy
** File description:
**      my_strcpy.c
*/


#include <unistd.h>

void my_putchar(char c);

char *my_strcpy(char *dest, const char *src)
{
    int i= 0;
    
    while (src[i])
{
    dest[i]=src[i]; i++;
   
 }
    dest[i]='\0';
    
    return dest;
}    
            
