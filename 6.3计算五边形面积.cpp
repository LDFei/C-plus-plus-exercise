#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double ss(double a,double b,double c);
int main()
{
	double b1,b2,b3,b4,b5,b6,b7,s;
	cout<<"������������:"<<endl;
	cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
	s=ss(b1,b5,b6)+ss(b6,b2,b7)+ss(b7,b3,b4);
	cout<<"����ε����Ϊ:"<<s<<endl; 
	return 0;
}
double ss(double a,double b,double c)
{
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
