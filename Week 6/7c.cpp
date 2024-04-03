#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int r;

void Out (int m, int n) {
    for (int i = 0; i < m; ++i) {
        cout << ' ';
    }
    for (int i = 0; i < n; ++i) {
        cout << '*';
    }
}

void Solve () {
    cin >> r;
    for (int i = 0; i < r; ++i) {
        Out(i, 1 + 2 * i);
    }
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}