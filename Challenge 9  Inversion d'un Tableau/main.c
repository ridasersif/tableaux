#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter le nomber des element :\nn = ");
    scanf("%d",&n);
    int t1[n];
    int t2[n];
    printf("enter les element du tableuax 1:");
    for(i=0;i<n;i++)
    {
        printf("\nt[%d]=",i);
        scanf("%d",&t1[i]);
    }
    printf("donc les element du tsbleuax 1 est :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t1[i]);
    }
    printf("\net lnvers des element du tsbleuax  est :\n");
    for (i=0;i<n;i++)
    {
         t2[i]=t1[n-1-i];
         printf("%d\t",t2[i]);
    }


}
