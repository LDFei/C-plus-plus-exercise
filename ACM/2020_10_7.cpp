#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>vec(n);
  for(int i = 0;i < n;i++)
  {
    cin>>vec[i];
  }
  sort(vec.rbegin(),vec.rend());
  int sum = 1;
  int s = 0;
  for(int i = 0;i < n - 1;i++)
  {
    if(vec[i] - 1 == vec[i+1] )
    {
      sum++;
      s = max(sum,s);
    }
    else
    {
    	sum = 1;
    }
  }
  cout<<sum;
  return 0;

}