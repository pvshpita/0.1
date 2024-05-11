#include <iostream>
using namespace std;

int main ()
{
    int n, h, i, w = 0;
    cin >> n >> h;

    for (i = 0; i < n; ++i) {
        int a[n];
        cin >> a[i];

        if (a[i] <= h) w++;
        else w+=2;
    }

    cout << w << endl;

    return 0;
}
