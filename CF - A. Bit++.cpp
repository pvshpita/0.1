#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n, x = 0;
    cin >> n;
    string s;

    for (int i = 0; i < n; ++ i) {
        cin >> s;

        for (int j = 0; j < 3; ++ j) {
            if (s[j] == '+') {
                x ++;
                break;
            }
            else if (s[j] == '-') {
                x--;
                break;
            }
        }
    }

    cout << x << endl;

    return 0;
}
