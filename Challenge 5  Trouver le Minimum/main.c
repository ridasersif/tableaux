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
     printf("donc les element du tableaux sont :\n");

     for(i=0;i<n;i++)  printf("%d\t",T[i]);
     int min=T[0];
     for(i=0;i<n;i++)//5 6 7 9 1
    {
        if(min>T[i]) min = T[i];
        else min = min;
    }
    printf("\net min  = %d",min);
    return 0;
}
