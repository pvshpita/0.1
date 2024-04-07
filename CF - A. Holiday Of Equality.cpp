#include <iostream>
using namespace std;
int main()
{
    int n, a, a_max = 0, k = 1, s;
    long long unsigned sum = 0, sum1, w;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> a;
        sum += a;
        if (a >= a_max) {
            if (a == a_max) k ++;
            a_max = a;
        }
        sum1 = sum - k*a_max;
        w = ( (n-k)*a_max - sum1 );
    }
    cout << w << endl;

    return 0;
}
