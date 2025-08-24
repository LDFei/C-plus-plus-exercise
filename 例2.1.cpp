#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input a,b=";
	cin>>a>>b;
	c=a; a=b; b=c;
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;
}
