//Escreva um programa que lê um número inteiro do teclado e imprime ”SIM” se o
//número for par e maior do que 10, ou for
//ímpar e menor do que 50. Caso contrário o programa deve imprimir ”NAO”.


#include<stdio.h>
int main(void) {
    int x;
    printf("Digite um número:\n");
    scanf("%d",&x); 
    if((x%2 == 0 && x>10) || (x%2 == 1 && x<50)) {
        printf("SIM");
    } else {
    printf("NAO");
    }
    return 0; 
}