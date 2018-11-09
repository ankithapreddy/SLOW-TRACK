# include<stdio.h>
struct point{
 float x;
 float y;
 };
 
struct point input()
 {
 struct point k;
 printf("Enter the values of x and y:\n");
 scanf("%f%f",&k.x,&k.y);
 return k;
 }

 void main()
 {
  struct point k;
  k=input();
  }

 
 
