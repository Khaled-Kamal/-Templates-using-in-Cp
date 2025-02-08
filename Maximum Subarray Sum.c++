// Author: _Khaled_Kamal_

#include "bits/stdc++.h"
using namespace std;

#ifdef DBG
#include "./debug.h"
#else
#define dbg(...)
#endif

#define int long long
void magic() {

    int n ; cin >> n ;
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; ++i) {
        cin >> a[i];
        a[i]+=a[i - 1];
    }

    int mn = INT_MAX , mx = INT_MIN ;
    for (int i = 1; i < n + 1; ++i) {
        mn = min(mn , a[i - 1]);
        mx = max(mx , a[i] - mn);
        mx = max(mx , a[i]);
    }
    cout << mx ;
}
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    while (t--) magic();
}
