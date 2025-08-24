#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	a=a/3;b=b+a;e=e+a;
	b=b/3;c=c+b;a=a+b;
	c=c/3;d=d+c;b=b+c;
	d=d/3;e=e+d;c=c+d;
	e=e/3;a=a+e;d=d+e;
	printf("%5d%5d%5d%5d%5d\n",a,b,c,d,e);


}
