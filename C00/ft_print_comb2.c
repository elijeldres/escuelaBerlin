/* • Create a function that displays all different combination of two two digits numbers
(XX XX) between 00 and 99, listed by ascending order. */


// always HEAD ()
#include <unistd.h>

void ft_putchar( char c)
{
    write ( 1, &c, 1);
}

// my working function  
void ft_print_comb2(void)
{
    int i;
    int j;
    i = -1;
    while ( ++i <=98)
    {
        j = i;
        while (++j <=99)
        {
            ft_putchar ((char) (i/10) + '0');
            ft_putchar ((char) (i%10) + '0');
            ft_putchar(' ');
            ft_putchar ((char) (j/10) + '0');
            ft_putchar ((char) (j%10) + '0');

            if (i != 98)
            {
                ft_putchar (',');
                ft_putchar (' ');
            }

        }
    }
}
// always main Function main()
int main ()
{
    ft_print_comb2 ();
    return (0); 
}
