#include <stdio.h>
int main()
{
    float A,B,C,pi=3.14159;
    printf("Enter the value of A, B & C = ");
    scanf("%f %f %f", &A, &B, &C);

    float triangle = (0.5*A*C);
    float circle = (pi*C*C);
    float trapezium = (0.5*(A+B)*C);
    float square = (B*B);
    float rectangle = (A*B);

    printf("The Area of - \n");
    printf("Triangle : %0.3f\n",triangle);
    printf("Circle : %0.3f\n",circle);
    printf("Trapezium : %0.3f\n",trapezium);
    printf("Square : %0.3f\n",square);
    printf("Rectangle : %0.3f\n",rectangle);
    return 0;
}