#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int a[3] = {4, 2, 0};

void sz1 (int a[]) {
    cout << sizeof(a) << '\n';
}

void sz2 (int a[3]) {
    cout << sizeof(a) << '\n';
}

void Solve () {
    cout << sizeof(a) << '\n';
    sz1(a);
    sz2(a);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}