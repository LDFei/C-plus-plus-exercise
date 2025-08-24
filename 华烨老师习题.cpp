 #include<iostream>
#include<cstdio>
using namespace std;
int fun(int y)
{
	for(int i=1;i<=y;i++)
	{
		if(i%4==0&&i%100!=0&&i%400==0)
		return i; 
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fun(a));
	return 0;
 } 
