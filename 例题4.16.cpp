#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	for(int i=100;i<=200;i++)
	{ int x=2;
	while(x<=floor(sqrt(i)) && (i%x!=0))
	++x;
	if(x>floor(sqrt(i)))
	cout<<i<<"\t";
	}

	return 0;
 } 
