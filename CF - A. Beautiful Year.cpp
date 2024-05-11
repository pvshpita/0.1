#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int y;
    cin >> y;

    int i, j, k;

    for (k = 0; k < 8000; ++k) {
        y++;
        string s = to_string(y);
        int cnt, sum = 0;

        for (i = 0; i < 4; ++i) {
            cnt = 0;
            for (j = i+1; j < 4; ++j) {
                if (s[i] != s[j]) cnt++;
            }
            sum += cnt;
        }
        if (sum == 6) break;
    }

    cout << y << endl;

    return 0;
}
