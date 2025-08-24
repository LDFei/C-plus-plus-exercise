#include<iostream>
#include<cstdio>
#define A 100000000
using namespace std;
int main()
{
	int a,b=0,max=-A,min=A,c=0;
	while(scanf("%d",&a))
	{
		c+=a;
		max=a>max?a:max;
		min=a<min?a:min;
		b=b+1;
	}
	printf("%d %d %.3lf\n",max,min,(double)c/b);
	return 0;
}
