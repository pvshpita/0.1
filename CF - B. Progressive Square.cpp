#include <iostream>
using namespace std;
int main ()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++ i) {
        int n, c, d;
        int j, k, t = 0;
        int b[9], s[n][n];

        cin >> n >> c >> d;

        for (j = 0; j < 9-1; ++ j) {
            cin >> b[j];
            if (t < b[j]) t = b[j];
        }

        for (j = 0; j < n; ++ j) {
            for (k = 0; j < n; ++ j) {
                if (j > 0 && k > 0) {
                    s[j][k] = t + d*j + c*k;
                }
                else if (j > 0 && k == 0) {
                    s[j][k] = t + c*j;
                }
                else if (k > 0 && j == 0) {
                    s[j][k] = t + d*k;
                }
            }
        }
        for (j = 0; j < n; ++ j) {
            for (k = 0; k < n; ++ k) {
                cout << s[j][k] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
