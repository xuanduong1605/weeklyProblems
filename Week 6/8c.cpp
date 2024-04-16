#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int Round1 (double x) {
    int a = (int) x;
    double _x = a;
    if (x - _x < 0.5f) return x;
    return x + 1;
}

int Round2 (double x) {
    int a = ceil(x);
    int b = floor(x);
    if (x - b < 0.5) return b;
    return a;
}

void Solve () {
    int n;
    cin >> n;
    cout << Round1(n) << ' ' << Round2(n);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}