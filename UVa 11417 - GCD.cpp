#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;

    while (1)
    {
        cin >> n;
        cnt ++;
        if (n == 0 || cnt == 100) break;

        int i, j, gcd, g = 0;

        for (i = 1; i <= n; ++i) {
            for (j = i+1; j <= n; ++j) {
                if (i != 1 && j % i == 0) gcd = j / i;
                else gcd = 1;
                g += gcd;
                cout << "i = " << i << " j = " << j << " ";
                cout << "gcd = " << gcd << " g = " << g << endl;
            }
        }
    }

    return 0;
}

/*
8 = 2 * 2 * 2
12 = 2 * 2 * 3
18 = 2 * 3 * 3
60 = 2 * 2 * 3 * 5
*/
