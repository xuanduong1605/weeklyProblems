#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int x, y;

int findGCD (int a, int b) {
    if (!a) return b;
    return findGCD(b % a, a);
}

void Solve () {
    cin >> x >> y;
    if (findGCD(x, y) == 1) {
        cout << "True";
    }
    else cout << "False";
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}