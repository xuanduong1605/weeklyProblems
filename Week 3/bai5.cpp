#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

struct Point {
    int x, y;
};

struct Rect {
    int x, y, w, h;

    bool contains (const Point p) {
        return (x - w <= p.x && p.x <= x && y - h <= p.y && p.y <= y); 
    }
};

void Solve () {

}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}