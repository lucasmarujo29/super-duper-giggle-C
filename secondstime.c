#include <stdio.h>
 
int main() {
 
int x, horas,minutos,segundos;

scanf("%d",&x);

horas=x/3600;
x=x%3600;
minutos=x/60;
x=x%60;
segundos=x;

printf("%d:%d:%d",horas,minutos,segundos);
 
    return 0;
}