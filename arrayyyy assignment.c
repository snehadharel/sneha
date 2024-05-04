#include<stdio.h>
int main()
{

    int i,n,j,a[100],count,sum=0;
    printf("\n how many integers??");
    scanf("%d",&n);
    printf("\n enter the number");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        count=0;
        for(i=1;i<=a[j];i++)
        {
            if(a[j]%i==0)
                count++;
        }
        if (count==2)
            sum=sum+a[j];
    }
    printf("\n total sum of prime is %d",sum);
}


