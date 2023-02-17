/* How many eggs a dozen has? .. 12 my little friend
how many dozen do we have? let's find out */

#include <stdio.h>

int main ()
{
    
    printf("...You lazy fat ass; how many egg do you have?  ");
    
    int eggs; 
    scanf ("%i", &eggs);
     

    double dozen = ( double) eggs / 12;

    printf ("you have  %f dozen eggs .\n", dozen);

    return (0);
}