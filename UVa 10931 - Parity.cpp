#include <iostream>
using namespace std;

int main()
{
    long long i;
    string s;

    while (cin >> i) {
        if (i == 0) return 0;

        cout << "The parity of ";

        int a = 0, b = 0;
        while (i != 0) {
            s[a] = i % 2 + '0';
            if (s[a] == '1') b++;
            i /= 2;
            a++;
        }

        while (a--) cout << s[a];

        cout << " is " << b << " (mod 2).\n";
    }

    return 0;
}
