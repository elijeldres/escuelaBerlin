#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
 
void ft_print_reverse_alphabet(void)
{
  int i = 122;
  while (i <=122 && i >=97)
  ft_putchar(i--);
  ft_putchar('\n');
}

int main(void)
{
    ft_print_reverse_alphabet();
    return(0);
}


//man ASCII alphabet lowercase  a=97 z=122