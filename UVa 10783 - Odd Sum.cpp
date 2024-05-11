#include <iostream>
using namespace std;
int k;

void solve()
{
    int a, b, i, sum = 0;
    cin >> a >> b;

    if (a % 2 == 0) a += 1;

    for (i = a; i <= b; i+=2) sum += i;

    cout << "Case " << k << ": " << sum << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    for (k = 1; k <= t; ++k) solve();
    return 0;
}
