#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int t, n;
    string s;
    cin >> t;

    for (int i = 0; i < t; ++ i) {
        cin >> n >> s;

        int j, cnt = 0;
        bool flag = true;

        for (j = 0; j < n; ++ j) {
            if (s[j] == '1') cnt ++;
        }

        if (cnt % 2 != 0) flag = false;
        if (cnt == 2) {
            for (j = 0; j < n; ++ j) {
                if (s[j] == s[j + 1] && s[j] == '1') {
                    flag = false;
                }
            }
        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
