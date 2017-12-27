#include <stdio.h>

int v1[100],v2[100],v3[200],n1,n2,n3,i,j,k;
int main()
{
    printf("Give the lenght of the first sequence: ");
    scanf("%d",&n1);

    for(i=0;i<=n1-1;i++)
    {
        printf("v1[%d]=",i);
        scanf("%d",&v1[i]);
        printf("\n");
    }

    printf("\nGive the lenght of the second sequence: ");
    scanf("%d",&n2);

    for(j=0;j<=n2-1;j++)
    {
        printf("v2[%d]=",j);
        scanf("%d",&v2[j]);
        printf("\n");
    }

    i=0;
    j=0;
    n3=-1;
    while((i<=n1-1)&&(j<=n2-1))
    {
        if(v1[i]<v2[j])
        {
            n3++;
            v3[n3]=v1[i];
            i++;
        }
        else
        {
            n3++;
            v3[n3]=v2[j];
            j++;
        }
    }
    if(i<=n1-1)
    {
        for(k=i;k<=n1-1;k++)
        {
            n3=n3+1;
            v3[n3]=v1[k];
        }
    }

    if(j<=n2-1)
    {
        for(k=j;k<=n2-1;k++)
        {
            n3=n3+1;
            v3[n3]=v2[k];
        }
    }

    for(k=0;k<=n3;k++)
    {
        printf("\n");
        printf("%d",v3[k]);
    }
    return 0;
}
