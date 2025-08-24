#include<iostream>
using namespace std;
int a,b;
int xn(int x)
{
	if(x==0)
	a=1;
	else 
	{
		xn(x-1);
		a=b*a;
	}
 } 
int main()
{
	int x;
	cin>>b>>x;
	xn(x);
	cout<<b<<"^"<<x<<"="<<a<<endl;
	return 0; 
	
}
