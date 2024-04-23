#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

char* a;
char* b;

void Solve () {
    cin >> a >> b;
    int sza = strlen(a), szb = strlen(b);
    int cnt = 0;
    for (int i = 0; i < szb - sza; ++i) {
        if (!strcmp(a, b + sza - 1)) cnt++;
    }
    cout << cnt;
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}