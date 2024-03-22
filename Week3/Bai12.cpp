#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 2;

struct Point
{
    int x, y;

    Point (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

void print(Point p)
{
    cout << p.x << " " << p.y;
}

void input(Point &p)
{
    cin >> p.x >> p.y;
}

int main ()
{
    Point p = Point(15, 25);
    input(p);
}
