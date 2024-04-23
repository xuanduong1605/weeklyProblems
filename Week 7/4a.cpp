#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int n, target;

void Solve () {
    cin >> n >> target;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        *(a + i) = x;
    }
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (*(a + mid) < target) {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << l - 1;
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}