#include<iostream>
using namespace std;
int main()
{
	int i=1,sum1=0,sum2=0;
	for(i;i<=100;i++)
	if(i%2==0)
	sum1+=i;
	else 
	sum2+=i;
	cout<<sum1<<" "<<sum2;

	 return 0;
}
