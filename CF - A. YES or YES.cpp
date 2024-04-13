#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++ i) {
        string s;
        cin >> s;
        bool flag = false;

        if (s.size() != 3) flag = false;

        else {
            for (int j = 0; j < s.size()-1; ++ j) {
                if (s[j] == 'y' || s[j] == 'Y') {
                    if (s[j+1] == 'e' || s[j+1] == 'E') {
                        if (s[j+2] == 's' || s[j+2] == 'S') {
                            flag = true;
                        }
                    }
                }
            }
        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
