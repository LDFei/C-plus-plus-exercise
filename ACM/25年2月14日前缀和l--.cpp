// Problem: C. Sort
// Contest: Codeforces - Codeforces Round 962 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1996/C
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define MAXN 1e5 + 3
#define MINN -1e5 - 3
void solve()
{
	ll n,t;
	cin>>n>>t;
	string a,b;
	cin>>a>>b;
	vector<vector<ll>>vec(n + 1,vector<ll>(26,0));
	for(ll i = 0;i < n;i++)
	{
		vec[i + 1] = vec[i];
		vec[i + 1][a[i] - 'a']++;
		vec[i + 1][b[i] - 'a']--;//前缀和
	}
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		l--;//如果是前缀和l需要减一，而r不用，l减一是因为每次统计的是这次和之前相加的结果例如3 3如果l不减去1结果永远为0，如果减一这样计算的差值才是3的结果
		ll ans = 0;
		
		for(ll i = 0;i < 26;i++)
		{
			ans += ll(max((ll)0,vec[r][i] - vec[l][i]));
		}
		cout<<ans<<endl;
	}
}

int main()
{      
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int p;
	cin>>p;
	while(p--)
	{
		solve();
	}
    return 0;
}   