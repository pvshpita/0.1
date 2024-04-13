#include <iostream>
using namespace std;

int main ()
{
    int t, i, j;
    cin >> t;
    string s;
    bool flag = true;

    for (i = 0; i < t; ++ i) {
        cin >> s;

        if (s[0] == 'b' && s[2] == 'a')
            cout << "NO\n";
        else if (s[0] == 'c' && s[2] == 'b')
            cout << "NO\n";

        else cout << "YeS\n";
    }

    return 0;
}
