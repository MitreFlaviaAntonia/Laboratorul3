#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("How many numbers?\n");
    scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
        sum=sum+i*i;
        }

            printf("The sum of the first ");
            printf("%d",n);
            printf(" squares is: ");
            printf("%d\n",sum);

                printf("The largest value of n that gives a correct answer is 7896569.");
}
