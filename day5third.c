#include<stdio.h>
struct  points{
        float ax,ay;
        float bx,by;
        float cx,cy;
        float  area;
};
struct points  input()
{
        struct points k;
        printf("Enter the values of the ax,ay,bx,by,cx and cy\n");
        scanf("%f%f%f%f%f%f",&k.ax,&k.ay,&k.bx,&k.by,&k.cx,&k.cy);
        return k;
}

struct points compute_area(struct points k)
{
        k.area=k.ax*(k.by-k.cy)+k.bx*(k.cy-k.ay)+k.cx*(k.ay-k.by)/2;
        return k;
        }

void output(struct points k)
{
        printf("The area of the triangle is=%f\n",k.area);
        }
void main()
{
        struct points k;
        k=input();
        k=compute_area(k);
        output(k);
}

