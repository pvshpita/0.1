#include <iostream>
#include <string>
using namespace std;

void solve ()
{
    string s;
    cin >> s;

    if (s.size() == 3)
    {
        if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e')) cout << "1\n";
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o')) cout << "2\n";
    }

    else cout << "3\n";

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
