#include <iostream>
using namespace std;
int main()
{
    long long n, fact = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        fact *= i;
        fact %= 10000;

        if (i > 19) break;
    }

    if (n > 19) cout << "0\n";
    else cout << fact << endl;

    return 0;
}

//11 - 39916800
//12 - 479001600
//13 - 6227020800
//...
//17 - 355687428096000
//18 - 6402373705728000
//19 - 121645100408832000
