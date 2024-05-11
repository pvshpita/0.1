#include <iostream>
using namespace std;

void solve()
{
    int k,i, x = 0;
    cin >> k;

    for (i = 1; i <= 1666; ++i) {
        if (i % 3 != 0 && i % 10 != 3) {
            x++;
        }
        if (x == k) break;
    }

    cout << i << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
