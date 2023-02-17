# include <stdio.h>

int main()
{
    int radius;
    printf("Please enter a radius: \n ");
    scanf("%i", &radius); // address-of operator 
    
    double area = 3.14159* (radius*radius); // double bcs is float


    printf ("The area of a circle with radius  %i  is %f \n", radius, area ); // f = float
    return(0);
}