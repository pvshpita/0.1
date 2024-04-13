#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int i, u = 0, l = 0;
    string s;
    cin >> s;

    for (i = 0; i < s.size(); ++ i) {
        if (s[i] >= 65 && s[i] <= 90) u ++;
        else l ++;
    }

    for (i = 0; i < s.size(); ++ i) {
        if (l >= u) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] = s[i] + 32;
            }
        }
        else {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] = s[i] - 32;
            }
        }
    }

    cout << s << endl;

    return 0;
}
