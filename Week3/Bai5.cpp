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

    bool contains (const Point p)
    {
        return (x - w <= p.x && p.x <= x && y - h <= p.y && p.y <= y);
    }
};

int main ()
{
}
