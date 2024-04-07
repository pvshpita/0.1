#include <iostream>
using namespace std;
int main()
{
    int t, n, a, b, num = 0;
    cin >> t;

    for (int i = 0; i < t; i ++) {
        cin >> n;

        if (n <= 2) cout << "0" << endl;

        else {
            if (n % 2 != 0) cout << n/2  << endl;
            else cout << n/2-1 << endl;
        }

//        1 + (n-1)
//        2 + (n-2)
//        ...
//        x + (n-x)
//        where, n > x

    }
    return 0;
}
