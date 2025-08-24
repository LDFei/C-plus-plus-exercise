// Problem: C. Superultra's Favorite Permutation
// Contest: Codeforces - Codeforces Round 988 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2037/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
/**
 *    author:  tourist
 *    created: 17.11.2024 06:37:21
**/
#include <bits/stdc++.h>//牛逼因为如果是6那么就是1 3 5 2 4 6这样的话5和2就不符合题目要求，那么把5单独拿出来然后把4单独拿出来把他俩放一起就解决这个问题了
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    if (n < 5) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> a;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1 && i != 5) {
        a.push_back(i);
      }
    }
    a.push_back(5);
    a.push_back(4);
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0 && i != 4) {
        a.push_back(i);
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}