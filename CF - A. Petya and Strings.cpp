#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int i, cnt = 0;
    char j, k;

    for (i = 0; i < s.size(); ++i) {
        if (s[i] < 97) s[i] += 32;
        if (t[i] < 97) t[i] += 32;

        if (s[i] != t[i]) {
            j = s[i];
            k = t[i];
            break;
        }
    }

    if (j < k) cout << "-1\n";
    else if (j > k) cout << "1\n";
    else cout << "0\n";

    return 0;
}
