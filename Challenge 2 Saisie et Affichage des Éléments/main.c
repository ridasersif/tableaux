#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter le nombre d'�l�ments\nn = ");
    scanf("%d",&n);
     int T[n];
     printf("saisir les �l�ments de tableaux :\n");
     for(i=0;i<n;i++)
     {
         printf("T[%d]=",i+1);
         scanf("%d",&T[i]);
     }
     printf("donc les element du tableaux sont :\n");

     for(i=0;i<n;i++)
     {
         printf("%d\t",T[i]);

     }

    return 0;
}
