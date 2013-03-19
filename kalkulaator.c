// vajalik c keele päis
#include<stdio.h>

//muutujate loomine ja tehete loomine
int liitmine(int m1,int m2) {
    return(m1+m2);
}
int lahutamine(int m1,int m2) {
    return(m1-m2);
}
int korrutamine(int m1,int m2) {
    return(m1*m2);
}
int jagamine(int m1,int m2) {
    return(m1/m2);
}

//peaprogramm
int main() {
    int n1,n2;
    char sym,choice;
    choice = 'j';
    printf("See on lihtne kalkulaator.\n\n");
    while ( choice == 'j' || choice == 'J' ) { 
		printf("Sisesta oma tehe: (arv,tehe,arv) ");
        scanf("%d%c%d",&n1,&sym,&n2);
        if(sym=='+')
            printf("on: %d",liitmine(n1,n2));
        if(sym=='-')
            printf("on: %d",lahutamine(n1,n2));
        if(sym=='*')
            printf("on: %d",korrutamine(n1,n2));
        if(sym=='/')
            printf("on: %d",jagamine(n1,n2));
        printf("\nUus tehe?[j/e]");
        scanf("%s",&choice);
    }
    return 0;
}