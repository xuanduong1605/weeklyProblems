#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

int d;
string b;

string dtob (int d) {
    string ans = "";
    while (d) {
        ans += (char) ('0' + d % 2);
        d /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int btod (string b) {
    int hat = 0;
    int x = 0;
    string cur = b;
    reverse(cur.begin(), cur.end());
    for (char i : cur) {
        if (i == '1') x += pow(2, hat++);
        else hat++;
    }
    return x;
}

void Solve () {
    cin >> d >> b;
    cout << dtob(d) << '\n' << btod(b);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}