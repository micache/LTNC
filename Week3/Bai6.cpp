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

    void move ()
    {
        s.x += dx;
        s.y += dy;
    }
};

void display (const Ship& ship)
{
    cout << ship.id << ' ' << ship.s.x << ' ' << ship.s.y;
}

int main ()
{
}
