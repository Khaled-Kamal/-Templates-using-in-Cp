
// Find the contiguous subarray within an array which has the largest sum.  Example   [-1 5 6  ]  the answar = 11
// the code : 

#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve() {

  int n ; cin >> n ;
  vector<int> a(n);
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }
    int mx = a[0] , sum = a[0];
    for (int i = 1; i < n ; ++i) {
        sum = max(a[i] , sum + a[i]);
        mx = max(mx , sum);
    }
    cout << mx ;
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while (t--) solve();
}
