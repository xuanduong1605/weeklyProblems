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

    Ship (Rect _s, string _id, int _dx, int _dy) {
        s = _s;
        id = _id;
        dx = _dx;
        dy = _dy;
    }

    void move () {
        s.x += dx;
        s.y += dy;
    }
};

void display (const Ship& ship) {
    cout << ship.id << ' ' << ship.s.x << ' ' << ship.s.y;
}

void Solve () {
    Ship ship1 = Ship({1, 2, 3, 4}, "wxrd", 5, 10); 
    int loop = 0;
    while (loop < 10) {
        ++loop;
        ship1.move();
        display(ship1);
    }
}

int main () {
    FastIO
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    Solve();
}