/*
Exercise: Consider the program to determine whether a sequence of n numbers entered by the user is ordered or not. Make the program using a counter variable instead of an indicator
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
