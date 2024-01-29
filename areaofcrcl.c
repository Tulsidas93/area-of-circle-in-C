#include<stdio.h>                         //header file decleration

int main()
{
float radius, result;                     //veriabel declearation
printf("enter radius of circle:\n");       //print "Statement"
scanf("%f",&radius);                       // take input for keypad as radius value
result = ( 3.14159 * radius * radius);      // calculation of result
printf("Area of circle  is :%f\n", result);  // print result
return 0;
}
