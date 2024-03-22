#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 2;

struct Point
{
    int x, y;
};

struct Rect
{
    int x, y, w, h;
};

struct Ship
{
    Rect s;
    string id;
    int dx, dy;

    Ship (Rect _s, string _id, int _dx, int _dy)
    {
        s = _s;
        id = _id;
        dx = _dx;
        dy = _dy;
    }

    void move()
    {
        s.x += dx;
        s.y += dy;
    }
};

void display (const Ship& ship)
{
    cout << ship.id << ' ' << ship.s.x << ' ' << ship.s.y;
}

int main () {
    Ship ship1 = Ship({1, 2, 3, 4}, "hoang", 5, 10);
    int loop = 0;
    while (loop < 10) {
        ship1.move();
        display(ship1);
        loop++;
    }
}
