#include<bits/stdc++.h>

using namespace std;
int solve(int a)
{
	if(a<2)
	return 0;
	for(int i=2;i<a;i++)
	{
		if(a % i== 0)
		return 0;//不是质数
	}
	return 1;//质数
}

int main()
{      
	string a;
	cin>>a;
	vector<int> vec(a.size());
	int smax = 0,smin = 1000;
	int max_s=0;
	int min_s=0;
	for(int i = 0;i<a.size();i++)
	{
		vec[i] = a[i] - '0';
	}
	for(int i = 0;i < vec.size();i++)
	{
		smax=max(smax,vec[i]);
		smin=min(smin,vec[i]);
	}
	for(auto i:vec)
	{
		if(i==smax)
		{
			
			max_s++;
		}
		if(i==smin)
		{
			min_s++;
		}
	}
	int b = max_s-min_s;
	if(solve(b))
	{
		cout<<"Lucky Word"<<endl<<b;;
		
	}
	else if(!solve(b))
	{
		cout<<"No Answer"<<endl<<b;
	}
	else
	{
		cout<<"No Answer"<<endl<<b;
	}
	return 0;
}