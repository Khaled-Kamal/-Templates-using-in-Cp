#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n ; cin >> n ;
    vector<int> a(n);
    map<int , int> freq;
    for(int &x : a)
    {
        cin >> x ;
        freq[x]++;
    }
    // Sort the array using a lambda function_
    sort(a.begin(), a.end(), [&](int a, int b) {
        if (freq[a] != freq[b]) // Sort by frequency (ascending)
            return freq[a] < freq[b]; // // If equal frequency, sort by value (descending)
        return a > b;
    });
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
}
int main() {
    int t = 1 ; //cin >> t ;
    while(t--) solve();
    return 0;
}
//*
//
// Given an array of integers,
// sort the array in increasing order based on the frequency of the values.
// If multiple values have the same frequency, sort them in decreasing order
// (put the greatest first) based on their values.

//Example
// Input
//6
//1 2 2 -1 3 3
//Output
//1 -1 3 3 2 2
// *//
