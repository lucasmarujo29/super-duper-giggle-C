#include<stdio.h>
int main (){
    int aux,n,contadora;
    printf("digite um numero n: ");
    scanf("%d",&n);
    aux=2;
    contadora=0;
    while(aux<=n-1){
        if(n%aux==0){
            contadora++;
        } aux++;
    }
    if(contadora==0){
        printf("\no numero eh primo\n");
    } else {
        printf("o numero nao eh primo e tem %d divisores",contadora);
    }
    return 0;
}
