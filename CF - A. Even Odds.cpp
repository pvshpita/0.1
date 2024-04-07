#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    float y = (float)n/2;
    int s = ceil(y);

    if (k <= ceil(y)) {
        int x = -1;
        for (int i = 0; i < k; ++ i) {
            x += 2;
        }
        cout << x << endl;
    }

    else if (k > n/2) {
        if (n % 2 == 0) {
            int x = 0;
            for (int i = 0; i < k-n/2; ++ i) {
                x += 2;
            }
            cout << x << endl;
        }

        else {
            int x = 0;
            for (int i = 0; i < k-n/2; ++ i) {
                x += 2;
            }
            cout << x << endl;
        }
    }

    return 0;
}
