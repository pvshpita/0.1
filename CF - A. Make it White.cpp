#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int i, f, l;
        for (i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                f = i;
                break;
            }
        }
        for (i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                l = i;
            }
        }
        cout << (l - f + 1) << endl;
    }
    return 0;
}
