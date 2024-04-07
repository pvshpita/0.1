#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int t;
    string s;

    cin >> t;

    for (int i = 0; i < t; ++ i) {
        cin >> s;
        bool flag = false;

        for (int j = 0; j < s.size()-1; ++ j) {
            if (s[j] == 'i' && s[j+1] == 't') {
                flag = true;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
