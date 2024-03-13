#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;

int n;
int a[MAXN], b[MAXN];

int main()
{
    cin >> n;
    int minx = 1e9, miny = 1e9;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        minx = min(minx, x);
        miny = min(miny, y);
    }
    cout << 1ll * minx * miny;
}
