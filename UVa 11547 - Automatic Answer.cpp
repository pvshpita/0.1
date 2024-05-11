#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int i = (((((n * 567) / 9) + 7492 ) * 235) / 47) - 498;
    int ans = abs(i % 100 - i % 10) / 10;

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
