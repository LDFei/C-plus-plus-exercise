#include<iostream>
using namespace std;
int main()
{
	int m,n,gcd;
	cin>>m>>n;
	gcd=m>n?n:m;
	while(gcd>1&&(m%gcd!=0||n%gcd!=0))
	gcd--;
	cout<<gcd;
	return 0;
 } 
