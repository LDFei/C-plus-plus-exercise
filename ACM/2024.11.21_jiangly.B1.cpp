// Problem: B1. The Strict Teacher (Easy Version)
// Contest: Codeforces - Codeforces Round 972 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2005/B1
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n,m,t;
	cin >> n >> m>> t;
	vector<int>vec(m);
	for(int i = 0;i < vec.size();i++)
	{
		cin>>vec[i];
	}
	int a;
	cin>>a;
	sort(vec.begin(),vec.end());
	auto it = lower_bound(vec.begin(),vec.end(),a);//找到第一个大于或等于a的值的地址
	int ans = 0;
	if(it == vec.begin())
	{
		ans = vec[0] - 1;
	}
	else if(it == vec.end())
	{
		ans = n - vec[m - 1];
	}
	else
	{
		ans = (*it - *(it - 1))/2;
	}
	cout<<ans<<endl;
}
int main()

{      
	int p;
	cin>>p;
	while(p--)
	{
		solve();
	}
    return 0;
}   