#include <iostream>
using namespace std;

int main ()
{
    int i, j, k, a[5][5], cnt = 0;

    for (i = 0; i < 5; ++ i) {
        for (j = 0; j < 5; ++ j) {
            cin >> a[i][j];
        }
    }

    bool found = false;
    for (i = 0; i < 5; ++ i) {
        for (j = 0; j < 5; ++ j) {
            if (a[i][j] == 1) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    for (k = 0; k <5 ; ++ k) {
        if (i != 2) {
            if (i > 2) {
                i --;
                cnt ++;
            }
            else if (i < 2) {
                i ++;
                cnt ++;
            }
        }
        if (j != 2) {
            if (j > 2) {
                j --;
                cnt ++;
            }
            else if (j < 2) {
                j ++;
                cnt ++;
            }
        }
        if (i == 2 && j == 2) break;
    }

    cout << cnt << "\n";

    return 0;
}
