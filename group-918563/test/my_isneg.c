#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

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
int main ()
{
    my_isneg (6);
}
