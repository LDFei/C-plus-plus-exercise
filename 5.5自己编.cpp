#include<iostream>
using namespace std;
int main()
{
	int a[1001];
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	int b,c;
	b=a[1];
	c=1;
	for(i=2;i<=n;i++)
	{
		if(a[i]>b)
		{
		b=a[i];
		c=i;}
	}
	cout<<b;
	return 0;
}
