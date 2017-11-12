#include<stdio.h>
int main()
{
    int valueofangle;

    do
    {
        printf("Get angle:\n");
        scanf("%d",&valueofangle);

            if(!(valueofangle>=0&&valueofangle<=90))
                printf("Error");
    }
        while(!(valueofangle>=0&&valueofangle<=90));

}
