#include<iostream>
using namespace std;
int f(int m,int n)
{
	int t=m%n;
	return t==0?n:f(n,t);
	
}

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<f(m,n)<<endl;
}
