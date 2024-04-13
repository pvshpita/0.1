#include <iostream>
using namespace std;

int main ()
{
    int t, a[3], unique;
    cin >> t;

    while (t --) {
        for (int i = 0; i < 3; ++ i) {
            cin >> a[i];
        }

        if (a[0] == a[1]) unique = a[2];
        else if (a[0] == a[2]) unique = a[1];
        else unique = a[0];

        cout << unique << endl;
    }

    return 0;
}
