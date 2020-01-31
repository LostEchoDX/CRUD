/*
** ETNA PROJECT, 21/10/2019 by abdelr_o
** FIRST PROGRAM IN C
** File description:
**      my_putnbr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putnbr(int n)
{   
    if ( n < 0 )
        {
            my_putchar('-');
            if ( -n > 9 )
                {
                    my_putnbr(-n/10);
                }
            char i;
            i = -n%10 + '0';
            my_putchar(i);
        }

    if ( n > 0 )
        {
            if ( n > 9 )
                {
                    my_putnbr(n/10);
                }
            char i;
            i = n%10 + '0';
            my_putchar(i);
        }

    if ( n == 0 )
        {
            my_putchar('0');
        }
}
