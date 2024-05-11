#include <iostream>
using namespace std;

int main()
{
    long long p, q;
    while (cin >> p >> q) {
        if (p > q) cout << p - q << endl;
        else cout << q - p << endl;
    }
    return 0;
}
