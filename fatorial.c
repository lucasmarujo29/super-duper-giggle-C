#include<stdio.h>
int main (){
    int i,n,acu;
    printf("digite um valor para descobrir seu fatorial\n\n");
    scanf("%d",&n);
    acu=1;
    for(i=1;i<=n;i++){
        acu=acu*i;
    }
    printf("Fatorial de %d eh: %d\n",n,acu);
}