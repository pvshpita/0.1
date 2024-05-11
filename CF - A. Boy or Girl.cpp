#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    int i, j, temp, cnt = 0;

    for (i = 0; i < s.size(); ++i) {
        for (j = i+1; j <s.size(); ++j) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (i = 0; i < s.size(); ++i)
    {
        if (s[i] != s[i+1]) cnt++;
    }

    if (cnt % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";

    return 0;
}

//jojosbizarreadventure
//zvutsrrroonjjieeedaab
