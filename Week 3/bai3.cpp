#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

struct Point {
    int x, y;
};

Point mid_point (const Point a, const Point b) {
    return {(a.x + b.x) / 2, (a.y + b.y) / 2};
}

void Solve () {
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    Point M = mid_point(p1, p2);
    cout << M.x << ' ' << M.y;
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}