#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int count_even (int* a, int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (*(a + i) % 2) continue;
        cnt++;
    }
    return cnt;
}

void Solve () {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        *(a + i) = x;
    }
    cout << count_even(a, n);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}