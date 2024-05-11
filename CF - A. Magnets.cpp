#include <iostream>
using namespace std;

int main()
{
    int n, i, cnt = 0;
    cin >> n;
    string s, k;

    for (i = 0; i < n; ++i)
    {
        cin >> s;

        if (i > 0 && k != s) cnt++;

        k = s;
    }

    cout << cnt + 1 << endl;

    return 0;
}
