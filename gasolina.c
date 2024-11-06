/*
Criar um algoritmo que efetue o cálculo da quantidade de litros de combustível gastos
em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser
fornecidos o tempo gasto na viagem e a velocidade média.
Distância = Tempo x Velocidade. Litros = Distancia / 12.
O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de
Litros utilizados na viagem. 
*/

#include<stdio.h>
int main(){
    double dist,tempo,veloc,litros;
    scanf("%lf %lf",&tempo,&veloc);
    dist=veloc*tempo;
    litros=dist/12;
    printf("%lf %lf",litros,dist);
    return 0;
}