#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum(int );
    int n,a;
    printf("Enter size of array: ");
    scanf("%d",&n);
    a=sum(n);
    printf("sum=%d",a);


}
int sum(int n)
{
    int s=0,i;
    int arr[100];
    for (i=0;i<n;i++)
    {
        printf("Enter the array element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }

    return s;
}
