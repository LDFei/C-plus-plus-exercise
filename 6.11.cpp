#include<iostream>
using namespace std;
int f(int n);
 
int main()
{
int x;
cin>>x;
cout<<f(x);
return 0;
}
int f(int n)
{
return n==0?1:n*f(n-1);	
}
