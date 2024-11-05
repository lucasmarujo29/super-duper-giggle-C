#include <stdio.h>


int main() {

int n,x,dentro,fora;
dentro=0;
fora=0;
scanf("%d",&n); 
while (n>0) {
    scanf("%d",&x);
    if (10<=x&&x<=20) {
        dentro++;
    } else {
        fora++;
    }
    n--;
}
printf("%d in\n%d out\n",dentro,fora);
    return 0;
}