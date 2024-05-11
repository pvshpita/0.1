#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n, t, i;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--) {
        for (i = 0; i < s.size(); ++i) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap (s[i], s[i+1]);
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}

/*
BBGBGGGBGG
BGBGBGGGBG 1
GBGBGBGGGB 2
GGBGBGBGGB 3
GGGBGBGBGB 4
GGGGBGBGBB 5
GGGGGBGBBB 6
GGGGGGBBBB 7
*/
