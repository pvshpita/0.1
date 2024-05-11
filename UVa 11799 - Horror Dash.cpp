#include <iostream>
using namespace std;
int x;

void solve()
{
    int n, i, s = 0;
    cin >> n;
    int c[100];

    for (i = 0; i < n; ++i) {
        cin >> c[i];
        if (c[i] > s) s = c[i];
    }

    cout << "Case " << x << ": " << s << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    for (x = 1; x <= t; ++x) solve();
    return 0;
}
