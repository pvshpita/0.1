#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, t = "\0";
    cin >> s;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] < 97) s[i] += 32;
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            t += ".";
            t += s[i];
        }
    }

    cout << t << endl;

    return 0;
}

//JoJosBIZARREaDvEnTuRe
//.j.j.s.b.z.r.r.d.v.n.t.r
