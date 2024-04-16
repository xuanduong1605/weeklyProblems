#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int n;
int a[N], cnt[50];

void Solve () {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 49;
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 25) continue;
                cout << i << ' ' << j << ' ' << k << '\n';
            }
        }
    }
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}