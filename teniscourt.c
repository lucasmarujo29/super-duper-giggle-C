#include <stdio.h>
/*
a quadra é de (0,0) a (432,468)
condição 1: 0<=xb<=432
condição 2: 0<=yb<=468
*/

int main() {
    int xb, yb;
    scanf("%d%d",&xb,&yb);
    if(0<=xb&&xb<=432&&0<=yb&&yb<=468){
        printf("dentro\n");
    }
    else {
        printf("fora\n");
    }
    return 0;
}