#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[6];
    int i;
    T[0]='a';
    T[1]='i';
    T[2]='u';
    T[3]='e';
    T[4]='y';
    T[5]='o';
    for(i=0;i<6;i++)
        printf("%c\t",T[i]);
    return 0;
}
