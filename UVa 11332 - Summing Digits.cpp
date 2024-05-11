#include <iostream>
using namespace std;

int main()
{
    string n;

    while (cin >> n) {
        if (n == "0") return 0;

        int i, sum = 0;
        for (i = 0; i < n.size(); ++i) {
            n[i] -= '0';
            sum += int (n[i]);
        }

        if (sum >= 10) {
            for (i = 0; i < 2; ++i) {
                sum = (sum % 100)/10 + sum % 10;
                if (sum < 10) break;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
