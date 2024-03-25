#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int a[30];

void Solve () {
    srand(time(NULL));
    for (int i = 0; i < 30; ++i) {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << '\n';
    for (int i = 0; i < 30; ++i) {
        for (int j = i + 1; j < 30; ++j) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < 30; ++i) {
        cout << a[i] << ' ';
    }
}

int main () {
    FastIO
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    Solve();
}