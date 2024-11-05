//Write a program that reads an integer from the keyboard and prints “YES” if the number is
//even and greater than 10, or if it is
//odd and less than 50. Otherwise the program should print “NO”.


#include<stdio.h>
int main(void) {
    int x;
    printf("Digite um número:\n");
    scanf("%d",&x); 
    if((x%2 == 0 && x>10) || (x%2 == 1 && x<50)) {
        printf("SIM");
    } else {
    printf("NAO");
    }
    return 0; 
}
