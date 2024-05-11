#include <iostream>
using namespace std;
int i;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        if (b > c) cout << "Case " << i << ": " << b << endl;
        else {
            if (a > c) cout << "Case " << i << ": " << c << endl;
            else cout << "Case " << i << ": " << a << endl;
        }
    }

    else {
        if (a > c) cout << "Case " << i << ": " << a << endl;
        else {
            if (b > c) cout << "Case " << i << ": " << c << endl;
            else cout << "Case " << i << ": " << b << endl;
        }
    }

    return;
}

/*
30 25 15 - b
30 10 15 - c
25 20 30 - a
20 25 10 - a
10 20 18 - c
15 18 20 - b
*/

int main()
{
    int t;
    cin >> t;
    for (i = 1; i <= t; ++i) solve();
    return 0;
}
