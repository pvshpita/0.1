#include <iostream>
#include <cmath>
using namespace std;
const double pi = acos(-1.0);

void solve()
{
    double l, w, r, red, green;
    cin >> l;

    w = l * (6 / 10.0);
    r = l / 5;

    red = pi * r * r;
    green = l * w - red;

    printf ("%.2lf %.2lf\n", red, green);

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

// 3.141592653589793238462643383279502884197...
