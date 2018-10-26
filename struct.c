
#include<stdio.h>
struct fraction
{
  int num;
  int den;
};
struct fractions
{
        int n;
        int arr[10];
};

struct fractions input()
{
int i;
struct fractions f;
printf("Enter the number of fractions:\n");
scanf("%d",&f.n);
for(i=0;i<f.n;i++)
{
  struct fraction s;
  printf("Enter the numerator[%d]: ",i+1);
  scanf("%d",&f.arr[10]);
  printf("Enter the denominator[%d]:",i+1);
  scanf("%d",&f.arr[10]);
}
return f;
}
void output(struct fractions f)
{
 printf("The fraction is:%d",f.arr[10]);
}
int main()
{
struct fractions f;
f=input();
output(f);
}
