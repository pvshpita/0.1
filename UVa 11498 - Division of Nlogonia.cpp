#include <iostream>
using namespace std;
int m, n;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x - m > 0 && y - n > 0) cout << "NE\n";

    else if (x - m < 0 && y - n > 0) cout << "NO\n";

    else if (x - m > 0 && y - n < 0) cout << "SE\n";

    else if (x - m < 0 && y - n < 0) cout << "SO\n";

    else cout << "divisa\n";

    return;
}

int main()
{
    int t;
    while (cin >> t)
    {
        if (t == 0) return 0;
        cin >> m >> n;
        while (t--) solve();
    }
    return 0;
}
