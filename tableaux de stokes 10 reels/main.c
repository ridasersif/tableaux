#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4];
    int i;
    float S,M,P;
    S=0;
    M=0;
    P=1;
    for (i=1;i<=4;i++)
    {
    printf("T[%d]=",i);
    scanf("%d",&T[i]);
    S=S+T[i];
    P=P*T[i];
    M=M-T[i];
    }

    printf("S=%.2f\nM=%.2f\nP=%.2f",S,M,P);
    return 0;
}
