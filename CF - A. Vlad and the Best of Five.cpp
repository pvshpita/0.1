#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int i, a = 0, b = 0;
        for (i = 0; i < 5; ++i) {
            if (s[i] == 'A') a++;
            else if (s[i] == 'B') b++;
        }

        if (a > b) cout << "A" << endl;
        else if (b > a) cout << "B" << endl;
    }

    return 0;
}
