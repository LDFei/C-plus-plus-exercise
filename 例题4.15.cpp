#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	for(b=0;b<=9;b++)
	for(c=0;c<=9;c++)
	if(a*a*a+b*b*b+c*c*c==a*100+b*10+c)
	  cout<<setw(4)<<a*100+b*10+c;
	return 0;
}
