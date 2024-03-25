#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int a[4] = {1, 2, 3, 4};

void Solve () {
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << ' ';
    }
}

int main () {
    FastIO
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    Solve();
}