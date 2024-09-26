#include <stdio.h>
#include <stdlib.h>

int main()
{
   float T[4];
   int i;
   float m,s;
   printf("Donner les notes des Etudiant:\n");
   for(i=0;i<4;i++)
   {
       printf("N%d=",i+1);
       scanf("%f",&T[i]);
   }
   s=0;
   for (i=0;i<4;i++) s=s+T[i];
   m=s/4;
   printf("la moyenne des notes est :%.2f",m);





    return 0;
}
