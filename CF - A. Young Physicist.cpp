#include <iostream>
using namespace std;

int X = 0, Y = 0, Z = 0;
void solve()
{
    int x, y, z;

    cin >> x >> y >> z;
    X += x;
    Y += y;
    Z += z;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();

    if (X == 0 && Y == 0 && Z == 0)
        cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
