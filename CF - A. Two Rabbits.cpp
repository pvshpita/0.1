#include <iostream>
using namespace std;

int main()
{
    long long n, j, time;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x == y) cout << "0" << endl;

        else {
        for (j = 0; j < 100; j ++) {
            if(x + j*a == y - j*b) {
                cout << j << endl;
                break;
            }
        }
            if (x + j*a != y - j*b) {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
//x - j*a , y - j*b
