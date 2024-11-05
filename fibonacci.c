//programa que seja capaz de impirmir os primeiros "n" números da série de fibonacci
//MEU JEITO
#include <stdio.h>
int main(){
    int contadora,n,termonovo,termovelho,auxiliar;
    printf("digite quantos numeros vc quer da sequencia de fibonacci (n)");
    scanf("%d",&n);
    contadora=1;
    termovelho=0;
    termonovo=1;
    printf("1");
    if(n!=1) do{
        auxiliar=termonovo;
        termonovo=termonovo+termovelho;
        termovelho=auxiliar;
        printf("%d",termonovo);
        contadora++;
    } while(contadora<=n-1);
    else{
    return 0;
}
return 0;
}

//RESPOSTA OTIMIZADA
/*
int main(){
    int n,f_ant,f_atual,f_aux,cont;
    printf("\nDigite um numero: ");
    scanf("%d",&n);
    cont=1;f_ant=0;f_atual=1;
    while(cont<=n){
    printf("%d",f_atual);
    f_aux=f_atual;
    f_atual=f_atual+f_ant;
    f_ant=f_aux;
    cont++;
    }
    printf("\n");
return 0;
}
*/