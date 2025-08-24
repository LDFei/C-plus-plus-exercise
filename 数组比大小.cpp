#include<iostream>
using namespace std;
int main()
{
	int i,n,b;
	int a[10];
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	b=a[1];
	for(i=2;i<=n;i++)
	{
	if(a[i]>b)
	b=a[i];
	} 
	cout<<b;
	return 0;
}
