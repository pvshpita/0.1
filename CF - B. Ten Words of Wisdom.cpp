#include <iostream>
using namespace std;

void solve()
{
    int n, i, a, b, k = 0, x = -1;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> a >> b;

        if (b > k && a <= 10) {
            k = b;
            x = i;
        }
    }

    cout << x + 1 << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
