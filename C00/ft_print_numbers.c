# include <unistd.h>

void ft_putchar (char c)
{
    write (1,&c,1);
}

void ft_print_numbers(void)
{
    int i = 48; 
    while (i>= 48 && i<= 57)
    ft_putchar(i++);
    ft_putchar ('\n');
}


int main(void )
{
    ft_print_numbers();
    return (0);
}

//man ASCII numbers 0=48  9=57