#include <iostream>
using namespace std;

int main ()
{
    int t, a, b, c;
    cin >> t;

    for (int i = 0; i < t; ++ i) {
        cin >> a >> b >> c;

        if (a - b == 0) cout << c << endl;
        else if (a - b != 0) {
            if (b - c == 0) cout << a << endl;
            else if (a - c == 0) cout << b << endl;
        }
    }

    return 0;
}
