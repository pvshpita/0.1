#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string hate = "I hate ";
    string love = "I love ";

//    if (n == 1) cout << "I hate it" << endl;

    if (n % 2 == 0) {
    for (int i = 2; i <= n; ++ i) {
        cout << hate;

        if (n % 2 == 0) {
            cout << "that " << love;
        }
        else cout << "that " << love << ;
    }
    cout << "it" << endl;
    }

    return 0;
}
