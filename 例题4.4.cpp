#include<iostream>
using namespace std;
int main()
{
	int n,a=1,i=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	a*=i; 
	cout<<n<<"!"<<"Ϊ"<<a;
	return 0; 
}
