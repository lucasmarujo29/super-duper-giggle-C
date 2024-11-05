#include<stdio.h>
int main(){
    int x, inverso, unidades, dezenas, centenas, uMilhar;
//x = número em si; inverso = número x invertido; unidades = algarismo das unidades ... uMilhar = unidade dos milhares
    printf("Digite o número de quatro dígitos\n");
    scanf("%d", &x);
    uMilhar = x /1000;
    x = x - uMilhar*1000;
    centenas = x /100;
    x = x - centenas*100;
    dezenas = x /10;
    x = x - dezenas*10;
    unidades = x;
    inverso = unidades*1000 + dezenas*100 + centenas*10 + uMilhar;
    printf("%d\n", inverso);
    return 0;
}