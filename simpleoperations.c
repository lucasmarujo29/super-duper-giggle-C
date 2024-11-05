/*Exercise: Create a program that reads two double numbers, computes and prints the sum, difference, multiplication and division of the two numbers. */

#include <stdio.h>
 
int main() {
 
double a, b, soma, dif, mult, div;

scanf("%lf%lf", &a,&b);
soma = a+b;
dif = a-b;
mult = a*b;
div = a/b;

printf("A soma é %lf\n A diferença é %lf\n A multiplicação é %lf\n A divisão é%lf\n", soma, dif, mult, div);
    return 0;
}
