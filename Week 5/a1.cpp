#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int a[N];
// int b[3] = {1, 2, 3, 4};
int c[5] = {1, 2, 3, 4};
int d[] = {1, 2, 3, 4};

void Solve () {
    int e[N];
//    int f[3] = {1, 2, 3, 4};
    int g[5] = {1, 2, 3, 4};
    int h[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; ++i) {
        cout << a[i] << ' ';
    }
    for (int i = 0; i < 4; ++i) {
        cout << c[i] << ' ';
    }
    for (int i = 0; i < 4; ++i) {
        cout << d[i] << ' ';
    }
    for (int i = 0; i < 4; ++i) {
        cout << e[i] << ' ';
    }
    for (int i = 0; i < 4; ++i) {
        cout << g[i] << ' ';
    }
    for (int i = 0; i < 4; ++i) {
        cout << h[i] << ' ';
    }
}

int main () {
    FastIO
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    Solve();
}