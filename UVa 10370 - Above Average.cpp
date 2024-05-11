#include <iostream>
using namespace std;
int x;

void solve()
{
    float n, sum = 0, cnt = 0;
    cin >> n;
    int i, c[1000];

    for (i = 0; i < n; ++i) {
        cin >> c[i];
        sum += c[i];
    }

    for (i = 0; i < n; ++i) {
        if (c[i] > sum/n) cnt++;
    }

    printf ("%.3f%\n", (cnt/n)*100);

    return;
}

int main()
{
    int t;
    cin >> t;
    for (x = 1; x <= t; ++x) solve();
    return 0;
}
