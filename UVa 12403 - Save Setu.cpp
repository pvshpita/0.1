#include <iostream>
using namespace std;

int main()
{
    int t, i, k, sum = 0;
    string command;
    cin >> t;

    for (i = 0; i < t; ++i) {
        cin >> command;
        if (command == "donate") {
            cin >> k;
            sum += k;
        }
        else if (command == "report") {
            cout << sum << endl;
        }
    }

    return 0;
}
