
#include<stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c) { 
        printf("todos os tres numeros sao iguais a %d", a);
        }
    else if (a != b && a != c && b != c) {
             if (a<b && b<c) {printf("%d\n%d\n%d\n\n", a, b, c);}
        else if (a<c && c<b) {printf("%d\n%d\n%d\n\n", a, c, b);}
        else if (b<a && a<c) {printf("%d\n%d\n%d\n\n", b, a, c);}
        else if (b<c && c<a) {printf("%d\n%d\n%d\n\n", b, c, a);}
        else if (c<b && b<a) {printf("%d\n%d\n%d\n\n", c, b, a);}
        else if (c<a && a<b) {printf("%d\n%d\n%d\n\n", c, a, b);}
            }
    else {
             if(a == b && a<c) {printf("%d\n%d\n%d\n\n", a, b, c);}
        else if(a == b && c<a) {printf("%d\n%d\n%d\n\n", c, a, b);}
        else if(a == c && a<b) {printf("%d\n%d\n%d\n\n", a, c, b);}
        else if(a == c && b<a) {printf("%d\n%d\n%d\n\n", b, a, c);}
        else if(c == b && b<a) {printf("%d\n%d\n%d\n\n", b, c, a);}
        else if(c == b && a<b) {printf("%d\n%d\n%d\n\n", a, b, c);}    
    }
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}