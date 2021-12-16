 /* 
 **ETNA PROJECT, 18/10/2021 by badaro_a
   my_putchar
   File description:
        aide compilation
  */
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}