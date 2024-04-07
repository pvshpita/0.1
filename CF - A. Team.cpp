#include <iostream>
using namespace std;

int main ()
{
    int n, a, b, c, k = 0;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            k ++;
        }
    }
    cout << k << endl;

    return 0;
}
