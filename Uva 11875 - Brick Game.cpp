#include <iostream>
using namespace std;
int x;

void solve()
{
    int n, i, capt;
    cin >> n;
    int a[11];

    for (i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == n/2) {
            capt = a[i];
        }
    }

    cout << "Case " << x << ": " << capt << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    for (x = 1; x <= t; ++x) solve();
    return 0;
}
