#include <iostream>
using namespace std;

void solve()
{
    int i, j;
    char a[8][8];
    string sum = "\0";

    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 8; ++j) {
            if (a[i][j] >= 'a' && a[i][j] <= 122) {
                sum += a[i][j];
            }
        }
    }

    cout << sum << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
