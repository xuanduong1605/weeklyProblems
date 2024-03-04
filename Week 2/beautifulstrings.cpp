#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

long long beautifulStrings (string s) {
    long long n = s.size();

    long long ans = n * (n - 1) / 2;

    int cnt1 = 0; 
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) cnt1++;
    }
    for (int i = 1; i <= cnt1; ++i) {
        ans -= (n - i - 1);
    }

    int cnt2 = 0;
    for (int i = 2; i < n; ++i) {
        if (s[i] == s[i - 2]) cnt2++;
    }
    ans -= cnt2;

    return ans;
}


void Solve () {
    string inp;
    cin >> inp;
    cout << beautifulStrings(inp);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}