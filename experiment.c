/*exercise:

Maria has just started her undergraduate course at medical school and needs your help to organize the experiments of a laboratory for which she is responsible. She wants to know at the end of the year how many guinea pigs were used in the laboratory and the percentage of each type of guinea pig used.

This laboratory in particular uses three types of guinea pigs: frogs, rats and rabbits. To obtain this information, she knows exactly the number of experiments that were performed, the type of guinea pig used and the number of guinea pigs used in each experiment.

Input
The first line of input contains an integer value N that indicates the various test cases that follow. Each test case contains an integer Amount (1 ≤ Amount ≤ 15) that represents the number of guinea pigs used and a character Type ('C', 'R' or 'S'), indicating the type of guinea pig (R: Rat S: Frog C: Rabbit).
Output
Show the total number of guinea pigs used, the total number of each type of guinea pig used and the percentage of each in relation to the total number of guinea pigs used, with the percentage being shown with two digits after the period.
*/
    
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
