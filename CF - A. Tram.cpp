#include <iostream>
using namespace std;

int main ()
{
    int n, a, b;
    cin >> n;

    int i, sum = 0, cap = 0;
    for (i = 0; i < n; ++i) {
        cin >> a >> b;

        sum -= a;
        sum += b;

        if (sum > cap) cap = sum;
    }

    cout << cap << endl;

    return 0;
}
