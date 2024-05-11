#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    bool ch[26] = {false};

    for (char c : s) {
        if (! ch[int(c)]) {
            cnt++;
            ch[int(c)] = true;
        }
    }

    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";

    return 0;
}

//jojosbizarreadventure
