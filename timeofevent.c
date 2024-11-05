#include <stdio.h>
#include <string.h>



int main() {
    int d1,h1,m1,s1,d2,h2,m2,s2,lg1,lg2,duration,de,he,me,se;
    scanf("Dia %d\n",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d\n",&d2);
    scanf("%d : %d : %d\n",&h2,&m2,&s2);

    lg1=(d1*24*60*60)+(h1*60*60)+(m1*60)+s1;
    lg2=(d2*24*60*60)+(h2*60*60)+(m2*60)+s2;
    duration=lg2-lg1;
    de=duration/(24*60*60);
    duration=duration%(24*60*60);
    he=duration/(60*60);
    duration=duration%(60*60);
    me=duration/60;
    se=duration%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",de,he,me,se);


    return 0;
}

//     scanf("Dia %d%d%d%d%d%d%d%d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2);