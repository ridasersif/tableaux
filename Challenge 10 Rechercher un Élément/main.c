
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
    printf("donc les element du tsbleuax  est :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    int N;
    printf("\nenter un nomber :\nN = ");
    scanf("%d",&N);
    int x=0;
    for(i=0;i<n;i++)
    {

        if(N==t[i]);
        {
            x++;
        }
    }
    if (x==0) printf("le nomber %d n'est pas dans le tableau",N);

    else  printf("le nomber %d dans le tableau",N);



}
