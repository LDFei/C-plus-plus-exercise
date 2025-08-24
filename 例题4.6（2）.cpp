#include<iostream>
using namespace std;
int main()
{
	int m,n,r;
	cin>>m>>n;
	r=m%n;
    while(r!=0)
	{
	m=n;
	n=r;
	r=m%n;
	}
    cout<<"最大公约数为："<<n<<endl; 
	return 0;
}
