#include<iostream>
using namespace std;
int main()
{
	int sum1=0,sum2=0;
	for(int i=1;i<=100;i+=2)
	sum2+=i;
	for(int z=2;z<=100;z+=2)
	sum1+=z;
	cout<<"������Ϊ��"<<sum2<<" ż����Ϊ��"<<sum1;
	return 0;
}
