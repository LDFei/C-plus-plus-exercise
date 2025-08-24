#include<iostream>
#include<cstdio>
#include<iomanip>
const int n=2;
using namespace std;
int a[n][n]; 
int main()
{
for (int i=1;i<=n;i++)
{ 
for(int j=1;j<=n;j++)
cin>>a[i][j];
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
cout<<setw(5)<<a[j][i];
cout<<endl;
}
return 0; 
}
