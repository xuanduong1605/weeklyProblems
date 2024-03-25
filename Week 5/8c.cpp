#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e4 + 2;

int n;
int t[N], _t[N];

void Solve () {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (t[i] > t[j]) {
                swap(t[i], t[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << t[i] << ' ';
    }
    long long ans = t[0];
    _t[1] = t[0];
    for (int i = 2; i < n; ++i) {
        _t[i] += _t[i - 1] + t[i - 1];
        ans += _t[i];
    }
    cout << ans;
}

int main () {
    FastIO
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    Solve();
}