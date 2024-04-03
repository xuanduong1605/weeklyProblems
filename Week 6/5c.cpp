#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int n;

bool Check (int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void Solve () {
    cin >> n;
    if (Check(n)) {
        cout << n << " la so nguyen to";
    }
    else cout << n << " khong phai so nguyen to";
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}