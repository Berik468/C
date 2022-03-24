#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;
    printf("Enter a number: ");
    scanf("%lf", &b);
    printf("Enter a second number: ");
    scanf("%lf", &c);
    a = b*c;
    printf("Product = %lf \n", a);
    a = b+c;
    printf("Sum = %lf \n", a);
    a = b-c;
    printf("Difference1 = %lf \n", a);
    a = b/c;
    printf("Quotient1 = %lf \n", a);
    a = c-b;
    printf("Difference2 = %lf \n", a);
    a = c/b;
    printf("Quotient2 = %lf \n", a);
    


    
    return 0;
}