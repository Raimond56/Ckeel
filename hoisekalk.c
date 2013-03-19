// Päised

#include <stdio.h>
#include <math.h>

// Peaprogramm
main(void)
{
//põhilised muutujad
float saldo;
float hoius;
float protsent;
int aeg;
 
//Kalkulaatori päis
printf("HOIUSE KALKULAATOR");
printf("\n*************************\n"); // nime eraldus programmist
 
//Kasutaja sisestused 
printf("Hoiuse algne summa: ");
scanf("%f",&hoius);
printf("Hoiuse pikkus aastates: ");
scanf("%d",&aeg);
printf("Hoiuse protsent: ");
scanf("%f",&protsent);
printf("\n\n Teie andmed: \n");
 
//Kasutajale info kontrollimiseks tema sisestused
printf ("\n Hoius: %f eurot \n Hoiuse pikkus: %d aastat\n Hoiuse protsent: %f\n", hoius, aeg, protsent);
 
//vastuse päis
printf("\n%s %s\n","Periood\t","    Summa");
 
int aasta;
float prot_arv;
prot_arv = protsent/100;
 
//Hoiuse suuruse arvutamine aasta kaupa ning väljastamine
for(aasta=1; aasta <= aeg; aasta++)
{
saldo=hoius*pow(1+prot_arv,aasta);
printf("%2d %16.2f\n",aasta, saldo);
}
getch();
}
// Raimond Ilves