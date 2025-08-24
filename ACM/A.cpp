// Problem: A. Trust Nobody
// Contest: Codeforces - Codeforces Round 870 (Div. 2)
// URL: https://codeforces.com/group/s2EryViqZ5/contest/1826/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int nums;
    cin >> nums;
    
    vector<int> lie(nums);
    for (int i = 0; i < nums; i++) {
        cin >> lie[i];
    }
    
    int a = -1;
    
    for (int liars = 0; liars <= nums; liars++) 
    {
        int count = 0; 
        
        for (int i = 0; i < nums; i++) 
        {
            if (lie[i] > liars) 
            {
                count++;
            }
        }
        
        if (count == liars) 
        {
            a = liars;
            break;
        }
    }
    
    cout << a << endl;
}

int main() {
    int p;
    cin >> p;
    while (p--) {
        solve();
    }
    return 0;
}