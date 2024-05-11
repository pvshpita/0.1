#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10 || b + c >= 10 || c + a >= 10)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
