#include <ungistd.h>

int ft_putchar(char c)
{
    write(1,&c, 1);
    return (0);
}

int main(void)
{
    ft_putchar('@');
    return(0);
}