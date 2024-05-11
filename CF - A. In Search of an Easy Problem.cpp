#include <iostream>
using namespace std;

int main ()
{
    int n, a;
    cin >> n;
    bool flag = true;

    while (n--) {
        cin >> a;
        if (a == 1)
            flag = false;
    }

    if (flag) cout << "EASY\n";
    else cout << "HARD\n";

    return 0;
}
