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
    cout<<"���Լ��Ϊ��"<<n<<endl; 
	return 0;
}
