#include <iostream>
using namespace std;

int main ()
{
    int n, a;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;

    for (int i = 1; i <= n; ++ i) {
        cin >> a;

        if (i % 3 == 0) sum3 += a;
        else if (i % 3 == 2) sum2 += a;
        else sum1 += a;
    }

    if (sum1 > sum2 && sum1 > sum3)
        cout << "chest\n";
    else if (sum2 > sum1 && sum2 > sum3)
        cout << "biceps\n";
    else cout << "back\n";

    return 0;
}
