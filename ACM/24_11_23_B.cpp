// Problem: B. Minimize Equal Sum Subarrays
// Contest: Codeforces - Codeforces Round 965 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1998/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<cassert>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	for(;T--;)//还有这种写法for写成while
	{
		int N;cin>>N;
		for(int i=1;i<=N;i++)
		{
			int P;cin>>P;
			cout<<P%N+1<<(i==N?"\n":" ");//卧槽还有这种写法，如果数组长度是N且有1-N个数，让每个数i % n + 1就可以再从新乱序输出这个数组，我尼玛。
		}
	}
}