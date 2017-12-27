#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x, n, v[100],i,y;
int search(int x,int n,int v[100])
{
    int i;
    if (x==v[n/2])
        return n/2;

    if (x<v[n/2])
    for(i=0;i<=n/2;i++)
    {
        if(x==v[i])
           return i;
    }

     if (x>v[n/2])
    for(i=n/2;i<=n-1;i++)
    {
        if(x==v[i])
           return i;
    }


    return -1;

}
int main()
{
    printf("Give the lenght of he sequence: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
        printf("v[%d]=",i);
        scanf("%d",&v[i]);
        printf("\n");
    }
    printf("\nGive the value to search in the squence: ");
    scanf("%d",&x);
    y=search(x,n,v);
    printf("\n%d",y);
}
