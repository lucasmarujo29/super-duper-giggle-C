#include <stdio.h>
 
int main() {

int h1,m1,h2,m2,temptotal,nhoras,nminutos;
scanf("%d%d%d%d", &h1,&m1,&h2,&m2);
h1=h1*60+m1;
h2=h2*60+m2;
if(h1>h2){h2=h2+1440;}
temptotal=h2-h1;
nhoras=temptotal/60;
nminutos=temptotal%60;
if(temptotal==0){
    nhoras=24;
    nminutos=0;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",nhoras,nminutos);
    return 0;
    }
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",nhoras,nminutos);


    return 0;
}