#include<iostream>
using namespace std;
int main()
{
	int a=1992,t=1992,c=1;
	do
	{
		++c;
		t=(t*a)%100;
	}while(c!=1992);
	cout<<t<<endl;
	return 0;
}
