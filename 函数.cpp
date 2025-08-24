#include<iostream>
#include<cstdio>
using namespace std;
int jc(int x);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",jc(m)/(jc(m-n)*jc(n))); 
	
 }
 int jc(int x)
{
	int s=1;
	for(int i=1;i<=x;i++)
	s*=i;
	return s;
}
