
#include <stdio.h>
int main() {
    int ntestes,aux,tcoelhos,tratos,tsapos,tcobaias;
    tcoelhos=0;
    tratos=0;
    tsapos=0;
    aux=0;
    char animal;
    scanf("%d",&ntestes);
    do {
        scanf("%d %c",&aux,&animal);
        switch(animal){
            case 'C':
            tcoelhos=tcoelhos+aux;
            break;
            case 'R':
            tratos=tratos+aux;
            break;
            case 'S':
            tsapos=tsapos+aux;
            break;
            default:
            printf("vai toma no cu seu retardado do caralho");
            break;
        }
        ntestes--;
    } while(ntestes>0);
    tcobaias=tcoelhos+tratos+ tsapos;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",tcobaias,tcoelhos,tratos,tsapos);
    printf("Percentual de coelhos: %.2lf %%\n",tcoelhos*100.00/tcobaias);
    printf("Percentual de ratos: %.2lf %%\n",tratos*100.00/tcobaias);
    printf("Percentual de sapos: %.2lf %%\n",tsapos*100.00/tcobaias);




    return 0;
}