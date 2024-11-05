//Write a program that reads three numbers and
//prints the largest one


#include<stdio.h>
int main(void) {
    int a, b, c;
    printf("digite tres numeros \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c) { 
        printf("todos os tres numeros sao iguais a %d\n", a);
        }
    else if (a != b && a!=c && b!= c) {
        if (a > b && a > c) {
            printf("%d", a);
        }
        else if (b > c && b > a) {
            printf("%d", b);
        }
        else { 
            printf("%d", c);
        }
    }
    else if (a == b && a > c) {
        printf("%d", a);
    } else if (a == b && c > a) {
        printf("%d", c);
    } else if (a == c && a > b) {
        printf("%d", a);
    } else if (a == c && b > a) {
        printf("%d", b);
    } else if (b == c && b > a) {
        printf("%d", b);
    } else if (b == c && a > b) {
        printf("%d", a);
    }

    return 0;
}
