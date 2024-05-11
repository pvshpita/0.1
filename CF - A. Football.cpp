#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, cnt = 1;

    for (i = 0; i < s.size(); ++i) {
        if (s[i] == '0') {
            if (s[i] == s[i+1]) cnt ++;
            else cnt = 1;
        }

        if (s[i] == '1') {
            if (s[i] == s[i+1]) cnt ++;
            else cnt = 1;
        }
        if (cnt == 7) break;
    }

    if (cnt == 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
