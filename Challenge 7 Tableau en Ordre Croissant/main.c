#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter le nomber des element :\nn = ");
    scanf("%d",&n);
    int t[n];
    printf("enter les element du tableuax :");
    for(i=0;i<n;i++)
    {
        printf("\nt[%d]=",i);
        scanf("%d",&t[i]);
    }
    printf("donc les element du tsbleuax est :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(t[i]>t[j])
            {
                int x;
                x=t[i];
                t[i]=t[j];
                t[j]=x;
            }
        }
    }
    printf("\net le tableau a ordre croissant est :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }


    return 0;
}
