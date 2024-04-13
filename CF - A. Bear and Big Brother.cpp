#include <iostream>

using namespace std;

int main ()
{
    int a, b, t;
    cin >> a >> b;

    for (t = 1; t <= 6; ++ t) {
        a *= 3;
        b *= 2;

        if (a > b) break;
    }

    cout << t << "\n";

    return 0;
}

//x y
//3x 2y
//3(3x) 2(2y)
//3(3(3x)) 2(2(2x))
//...
//3^t(x) 2^t(x)

//1 10 - day 0
//3 20
//9 40
//27 80
//81 160
//243 320
//729 640 - day 6
