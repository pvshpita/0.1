#include <iostream>
using namespace std;

int main ()
{
    int t, i, n;
    cin >> t;

    while (t --) {
        cin >> n;
        int a[n];
        int min_digit = 9, max_prod = 1, cnt = 0;

        for (i = 0; i < n; ++ i) {
            cin >> a[i];

            if (a[i] < min_digit) {
                min_digit = a[i];
            }

            if (a[i] != 0) max_prod *= a[i];
            if (a[i] == 0) cnt ++;
        }

        if (min_digit == 0 && cnt > 1)
            cout << "0" << endl;
        else if (min_digit == 0 && cnt == 1) {
            max_prod = max_prod * (min_digit + 1);
            cout << max_prod << endl;
        }
        else {
            max_prod = (max_prod / min_digit) * (min_digit + 1);
            cout << max_prod << endl;
        }
    }

    return 0;
}
