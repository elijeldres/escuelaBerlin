/* • Create a function that displays all different combinations of three different digits in
ascending order, listed by ascending order - yes, repetition is voluntary */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int i, int j, int k) // how to display 3 diferents digits
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(',');
	ft_putchar(' ');
}


void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '0';
	j = '1';
	k = '2';

	while (i < ('7' + 1))
	{
		while (j < ('8' + 1))
		{
			while (k < ('9' + 1))
			{
				ft_print( i, j, k);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i ;
	}
}

int main ()
//int main(int argc, const char *argv[]) just a fancier way to say the same
{
	ft_print_comb();
	return 0;
}
