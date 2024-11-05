#include<stdio.h>
int main(){
int b;
printf("|MENU|\n\nDigite o número para escolher seu prato.\n1-Spaghetti ao Molho de Tomate\n2-Frango Grelhado com Salada\n3-Lasanha à Bolonhesa\n4-Salmão com Purê de Batatas\n5-Sair do programa\n");
printf("\nnão se esqueça de sair do programa APÓS escolher um prato\n\n");



do {
    
    scanf("%d",&b);
    switch (b){
        case 1: 
            printf("Você escolheu:\n|Spaghetti ao Molho de Tomate|\n\nMassa fresca feita na hora, acompanhada de molho de tomate caseiro com manjericão fresco e parmesão ralado. Ideal para os amantes de pratos tradicionais italianos.\n\n");
            break;
        case 2:
            printf("Você escolheu:\n|Frango Grelhado com Salada|\n\nPeito de frango grelhado, temperado com ervas finas e servido com uma salada colorida de folhas verdes, tomate-cereja, cenoura ralada e um leve molho vinagrete. Um prato leve e saudável.\n\n");
            break;
        case 3:
            printf("Você escolheu:\n|Lasanha à Bolonhesa|\n\nCamadas de massa intercaladas com molho bolonhesa (feito de carne moída e molho de tomate), molho branco cremoso e queijo derretido. Finalizado com uma camada crocante de parmesão gratinado.\n\n");
            break;
        case 4:
            printf("Você escolheu:\n|Salmão com Purê de Batatas|\n\nFilé de salmão grelhado, servido com um purê de batatas cremoso e molho de ervas. Um prato sofisticado e nutritivo, perfeito para uma refeição especial.\n\n");
            break;
        case 5:
            printf("Você escolheu SAIR\n\n");
            break;
        default: printf("escolha uma das opções válidas.\n\n");
    }
    if(b==1||b==2||b==3||b==4){printf("ou escolha outro prato do menu ou digite 5 para sair\n\n");}
} while(b!=5);
return 0;

}