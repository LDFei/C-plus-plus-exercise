#include<iostream>
#include<iomanip>
using namespace std;
const int n=10;
int a[n+1][n+1];
int main()
{
	a[1][1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i][i]=1;
		a[i][1]=1;
    for(int j=2;j<=i;j++)
	a[i][j]=a[i-1][j-1]+a[i-1][j];	
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=10)
		cout<<setw(30-3*i)<<" ";
			for(int j=1;j<=i;j++)
		cout<<setw(6)<<a[i][j];
		cout<<endl;
		
	}
	return 0;
}

