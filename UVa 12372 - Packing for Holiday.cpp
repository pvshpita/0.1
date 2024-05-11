#include <iostream>
using namespace std;
int k;

void solve()
{
    int l, w, h;
    cin >> l >> w >> h;

    if (l > 20 || w > 20 || h > 20)
        cout << "Case " << k << ": " << "bad\n";
    else cout << "Case " << k << ": " << "good\n";

    return;
}

int main()
{
    int t;
    cin >> t;
    for (k = 1; k <= t; ++k) solve();
    return 0;
}
