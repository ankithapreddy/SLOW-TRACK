#include<stdio.h>
struct fraction
{
  int num;
  int den;
};

struct fraction input()
{
struct fraction f;
printf("Enter the values of numerator and denominator:\n");
scanf("%d%d",&f.num,&f.den);
return f;
}
void output(struct fraction f)
{
 printf("The fraction is:%d/%d",f.num,f.den);
}
int main()
{
struct fraction f;
f=input();
output(f);
}


