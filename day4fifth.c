#include <stdio.h>

int main()

{
    float sum_n(int);
    int n;
    float a;
    printf("Enter number of fractions:");
    scanf("%d",&n);
    a=sum_n(n);
    printf("\nSum=%f",a);

}

float sum_n(int n)
{
    float s=0;
    int i,num[100],den[100];
    for(i=0;i<n;i++)
    {
        printf("Enter the value of numerator[%d]",i+1);
        scanf("%d",&num[i]);
        printf("Enter the value of denominator[%d]",i+1);
        scanf("%d",&den[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("num[%d]=%d  den[%d]=%d\n",i+1,num[i],i+1,den[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+num[i]/den[i];

    }
    return s;
}
