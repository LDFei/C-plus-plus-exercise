#include<iostream>
#include<iomanip>
using namespace std;
const int n=6;
int a[n+1][n+1];
int main()
{
	for(int i=1;i<=n;i++)
	 for(int y=1;y<=n;y++)
	  cin>>a[i][y];

	for(int i=1;i<=n;i++)
		 for(int y=1;y<=n;y++)
		  if(i==y||i+y==7)
		  a[i][y]=a[i][y]+10;
		  
	for(int i=1;i<=n;i++)
{

	 for(int y=1;y<=n;y++)
	
	  cout<<setw(6)<<a[i][y];
	   cout<<endl;
	   }
	return 0;
}
