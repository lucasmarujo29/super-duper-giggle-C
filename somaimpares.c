//Faça um algoritmo que calcule a soma dos números ímpares entre 1 e um limite
//superior definido pelo usuário.
//cliente entra com um valor, tenho que somar todos os números impares entre 1 e esse valor
//sem usar o macete dos quadrados perfeitos


#include <stdio.h>
int main(){
    int acu,limite,aux;
    printf("Digite um limite pra soma dos impares\n");
    scanf("%d",&limite);
    acu=0;
    aux=1;
    while(aux<=limite){
        if(aux%2==1){
        acu=acu+aux;}
        aux++;
    }

printf("A soma eh igual a: %d",acu);
return 0;
}


//    scanf("%",&);
//    printf("\n");
/*    for(aux=1;aux<=limite;aux++){
        if(aux%2!=0){
            acu=acu+aux;}}*/
//fiz isso ai com for e tava dando mto errado