#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,i;
    printf("enter le nombre d'éléments\nn = ");
    scanf("%d",&n);
     int T[n];
     printf("saisir les éléments de tableaux :\n");
     for(i=0;i<n;i++)
     {
         printf("T[%d]=",i+1);
         scanf("%d",&T[i]);
     }
     printf("donc les element du tableaux sont : ");

     for(i=0;i<n;i++) printf("%d   ",T[i]);

     int S=0;
      printf("\net la somme des element du tableaux sont : ");
     for(i=0;i<n;i++)
     {
         S=S+T[i];
     }
     printf("S = %d",S);


}
