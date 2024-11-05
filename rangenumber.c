//Exercise: Read an integer value N. This value will be the number of integer values ​​X that will be read next.
//Show how many of these X values ​​are within the range [10,20] and how many are outside the range, showing this information.

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
