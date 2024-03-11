#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

struct Point {
    int x, y;

    Point (int _x, int _y) {
        x = _x;
        y = _y;
    }
};

void print (Point p) {
    cout << p.x << ' ' << p.y;
}

void input (Point &p) {
    cin >> p.x >> p.y;
}

void Solve () {
    Point p = Point(15, 25);
    input(p);
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}