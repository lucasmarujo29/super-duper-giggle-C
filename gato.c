/*Crie um programa que lê dois números double e que computa e imprime a soma, a diferença, a multiplicação e divisão dos dois números. */

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
