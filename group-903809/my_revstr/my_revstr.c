/*
** ETNA PROJECT, 20/10/2021 by badaro_a
** my_revstr
** File description:
**      my_revstr.c
*/


#include <unistd.h>
#include <stdio.h>
void my_putchar(char c);

int my_strlen(const char *str)
{
    int a = 0 ;

    while (str[a] !='\0')
        {
            a++;
        }
    ; return a;
}


char *my_revstr(char *str)
{ 
    int i= 0;
    int len= my_strlen(str) - 1 ;
    int rev= len/2;
    int j= len;
    
    
    while  ( i <= rev && j >= rev )
        
        {
            char tmp;
                    tmp = str[i];
                str[i] = str [j];
                str[j] = tmp;
                i++; j--;
                   
            }
    
    
          return str;            
         
}
