/**
* This program allows the user to calculate the hypotenuse of
* a triangle, assuming that the lengths of the other two sides
* of the triangle are known. The float type was selected instead
* of the double type for the memes.
*/

#include<stdio.h>
#include <math.h>

int main(void)
{
   float Number1, Number2, Hypotenuse;

   printf("Enter the length of the sides of the triangle: \n");
   scanf("%f%f", &Number1, &Number2);

   printf("The length of the first side of the triangle: %f\n", Number1);
   printf("The length of the second side of the triangle: %f\n", Number2);

   Hypotenuse = sqrt((Number1 * Number1) + (Number2 * Number2));

   printf("The hypotenuse of the triangle = %f\n", Hypotenuse);

   return 0;
}

/*

EXAMPLE INPUT/OUTPUT:

Enter the length of the sides of the triangle:
10
10
The length of the first side of the triangle: 10.000000
The length of the second side of the triangle: 10.000000
The hypotenuse of the triangle = 14.142136

*/
