#include <iostream>
using namespace std;

int main()
{
    int n, k, i;

    while (cin >> n >> k) {
        cout << n + (n - 1) / (k - 1) << endl;
    }

    return 0;
}
