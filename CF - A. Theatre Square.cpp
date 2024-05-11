#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    ll q, p;
    q = ceil(n / a);
    p = ceil(m / a);

    if (n <= a)
        cout << p << endl;
    else if (m <= a)
        cout << q << endl;
    else
        cout << p * q << endl;

    return 0;
}

//6 6 4 - 4
//5 5 5 - 1
//5 5 2 - 9
//13 13 9 - 4
//13 9 9 - 2
//13 3 6 - 3
//13 1 13 - 1
//13 12 12 - 2
//13 13 12 - 4
//13 7 6 - 6
//1000000000 1000000000 1 - 1000000000000000000
//1000000000 1000000000 999999999 - 4
