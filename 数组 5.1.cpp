#include<iostream>
using namespace std;
int a[100];
int main()
{
	int i;
	cin>>i;
if((i<=100)&&(i>=1))
{
	int n,h;
	for(int n=1;n<=i;n++)
	{
	a[n]=n;
	cout<<a[n]<<" ";}
	cout<<endl<<"����Ϊ����"<<endl; 
	for(h=i;h>=1;h--)
	{
	a[h]=h;
	cout<<a[h]<<" ";
	}
}
else
cout<<"�������0-100����"<<endl; 
	return 0;
}
