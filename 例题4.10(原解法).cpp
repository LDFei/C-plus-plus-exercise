#include<iostream>
using namespace std; 
int main()
{
	int a=1,t=0;
	do
	{
		++t;
		a=(a*92)%100;
	}while(t!=1992);
	cout<<a<<endl;
	return 0;
}
