#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{float a1,b1,c1,a2,b2,c2,x,y,a3,b3,c3;
scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
a3=a1/a2;
b3=b2*a3;
c3=c2*a3;
y=(c3-c1)/(b3-b1);
x=(c1-b1*y)/a1;
printf("%.2f,%.2f",x,y);
return 0; 
 } 
