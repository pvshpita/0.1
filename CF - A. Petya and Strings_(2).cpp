#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int i, cnt = 0;

    char j = '0', k = '0';

    for (i = 0; i < s.size(); ++i) {
        if (s[i] == t[i] || s[i] - 32 == t[i] || s[i] + 32 == t[i]) {
            cnt++;
        }
        else {
            j = s[i];
            k = t[i];
            break;
        }
    }

    if (j < 97) j += 32;
    if (k < 97) k += 32;

    if (j < k) cout << "-1\n";
    else if (j > k) cout << "1\n";
    else cout << "0\n";

    return 0;
}
