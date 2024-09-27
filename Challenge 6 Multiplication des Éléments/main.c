#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,F,P;
    printf("enter le nombre d'éléments\nn = ");
    scanf("%d",&n);
     int T[n];
     printf("saisir les éléments de tableaux :\n");
     for(i=0;i<n;i++)
     {
         printf("T[%d]=",i+1);
         scanf("%d",&T[i]);
     }
     printf("donc les element du tableaux sont :\n");
     for(i=0;i<n;i++)  printf("%d\t",T[i]);
     printf("\ndonez le facteur :\nF = ");
     scanf("%d",&F);
     printf("donc le produit des elements de tableaux est :\n");
     for(i=0;i<n;i++)
     {
         P=T[i]*F;
         printf("%d * %d = %d\n",F,T[i],P);
     }







    return 0;
}
