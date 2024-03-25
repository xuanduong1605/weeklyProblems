#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};  

char daytab2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};  


void Solve () {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab1[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << daytab2[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}