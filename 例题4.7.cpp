#include<iostream> 
using namespace std;
int main()
{
	int i=0;
	float n=0,a;
	while(n<5)
	{
		++i;
	    a=1.0/i;
	    n+=a;
	}
	cout<<i;
	return 0;
}
