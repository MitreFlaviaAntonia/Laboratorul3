#include<stdio.h>

    int celmaimicmultiplucomun(int a, int b)
    {
            int x,y,cmmmc;
            x=a;
            y=b;

                while(x!=y)
                {

                if(x>y)
                        x=x-y;

                    else
                        y=y-x;
                }

                            cmmmc=(a*b)/x;
                            return cmmmc;
    }

    int main()
    {
        int n,i,j;

            printf("Give the value for n:");
            scanf("%d",&n);

                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(celmaimicmultiplucomun(i,j)==n)
                        {
                            printf("%d",i);
                            printf(", ");
                            printf("%d",j);
                            printf("\n");}
                        }
                    }
    }
