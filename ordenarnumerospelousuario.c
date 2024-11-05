/*
Considere o programa para determinar se uma sequência de n números digitados
pelo usuário está ordenado ou não.
Refaça o programa usando uma variável contadora ao invés de indicadora
*/
#include <stdio.h>
int main(){
    int n,termonovo,termovelho,contadora,contadora2,aux;
    printf("digite a quantidade de termos que serão mencionados: \n");
    scanf("%d",&n);
    termonovo=0;
    termovelho=0;
    contadora=0;
    contadora2=0;
    do{
        printf("digite um número: \n");
        aux=termonovo;
        scanf("%d",&termonovo);
        if(termonovo<termovelho){
            contadora2++;
        }
        termovelho=termonovo;
        contadora++;
    } while(contadora<n);
    if(contadora2==0){printf("\nesta em ordem");}
    else {printf("nao esta em ordem");}


return 0;
}