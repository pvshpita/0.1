#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--) {
        size_t pos = s.find ("BG");
        while (pos != string :: npos) {
            s.replace (pos, 2, "GB");
            pos = s.find ("BG", pos + 2);
        }
    }

    cout << s << endl;

    return 0;
}

/*

  ╱|、
(˚ˎ 。7
 |、˜〵
じしˍ,)ノ

*/
