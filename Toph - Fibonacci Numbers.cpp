#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long long a = 1, b = 1, c;
    cin >> n;

    for (i = 2; i < n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    if (n == 1 || n == 2) cout << "1\n";
    else cout << c << endl;

    return 0;
}

//1 1 2 3 5 8 13 21 34 55 89 144 233
//48th - 4807526976
//50th - ? ok
//104th is the breaking point
