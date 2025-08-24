#include<iostream>
using namespace std;
const int maxl=51;
int a[maxl],n,m;
bool flag;
void sum(int,int);
int main ()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	cin>>a[i];       
	cin>>m;
	flag=false;
	sum(n,m);
	if(flag)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
	
}
void sum(int n,int m)
{
	if(a[n]==m)
	flag=true;
	else if
	(n==1) return;
	else 
	{
		sum(n-1,m-a[n]);
		sum(n-1,m);
	}
}		
