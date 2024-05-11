#include <iostream>
using namespace std;

void solve()
{
    int i, j, sum = 0;
    char s[3][3], k;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            cin >> s[i][j];
        }
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            sum += s[i][j];
        }
        if (sum != 'A'+'B'+'C')
        {
            sum -= '?';
            k = ('A'+'B'+'C') - sum;
        }
        sum = 0;
    }

    cout << k << endl;

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
