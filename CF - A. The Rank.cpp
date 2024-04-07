#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;
    int sum1, sum, k = 1;
    cin >> n;

    cin >> a >> b >> c >> d;
    sum1 = a + b + c + d;

    for (int i = 0; i < n-1; i ++) {
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;

        if (sum > sum1){
            k ++;
        }
    }

    cout << k << endl;

    return 0;
}
