
#include <stdio.h> 
int main() {
 
int x, n100, n50, n20, n10, n5, n2, n1;
scanf("%d", &x);
n100 = x/100;
x = x%100;
n50 = x/50;
x = x%50;
n20 = x/20;
x = x%20;
n10 = x/10;
x = x%10;
n5 = x/5;
x = x%5;
n2 = x/2;
x = x%2;
n1 = x;
x = 100*n100+50*n50+n20*20+n10*10+n5*5+n2*2+n1;
printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",x,n100,n50,n20,n10,n5,n2,n1);
    return 0;
}