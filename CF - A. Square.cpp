#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int t, i, side, area;
    cin >> t;

    while (t --) {
        int x, y, a, b;
        cin >> x >> y;
        a = x;

        for (i = 0; i < 3; ++ i) {
            cin >> x >> y;
            if (a != x) b = x;
        }

        side = abs (a - b);
        area = side * side;

        cout << area << endl;
    }

    return 0;
}
