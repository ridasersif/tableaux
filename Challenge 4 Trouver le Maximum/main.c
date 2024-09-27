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
     int max=T[0];
     for(i=0;i<n;i++)//5 6 7 9 1
    {
        if(max<T[i]) max = T[i];
        else max = max;
    }
    printf("\net max  = %d",max);

    return 0;
}
