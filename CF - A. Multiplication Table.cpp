#include <iostream>
using namespace std;

int main()
{
    int n, x, k = 0;
    cin >> n >> x;

    for (int i = 1; i <= x; i ++) {
        if (x % i == 0)
        k ++ ;
    }

    cout << k << endl;
    // k is the number of factors

    return 0;
}
