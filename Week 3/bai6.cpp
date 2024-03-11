#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

const int N = 1e5 + 2;

struct Point {
    int x, y;
};

struct Rect {
    int x, y, w, h;

};

struct Ship {
    Rect s;
    string id;
    int dx, dy;

    void move () {
        s.x += dx;
        s.y += dy;
    }
};

void display (const Ship& ship) {
    cout << ship.id << ' ' << ship.s.x << ' ' << ship.s.y;
}

void Solve () {

}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}