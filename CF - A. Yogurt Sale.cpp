#include <iostream>
using namespace std;
int main ()
{
    int t, n, a, b;
    cin >> t;

    for (int i = 0; i < t; ++ i) {
        cin >> n >> a >> b;

        if (2 * a <= b) {
            cout << n * a << endl;
        }

        else {
            if (n % 2 == 0) {
                cout << (n / 2) * b << endl;
            }
            else {
                cout << (((n -1)/2) * b + a) << endl;
            }
        }
    }
    return 0;
}
