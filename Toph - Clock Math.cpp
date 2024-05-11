#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int h, m;
    float min, hour;
    float dif, deg;
    cin >> h >> m;

    min = m * 6;
    hour = h * 30 + m * 0.5;
    deg = abs (min - hour);
    if (deg > 180) deg = 360 - deg;

    printf ("%.4f\n", deg);

    return 0;
}

//1hr(5) = 30deg; min - 360deg
//1min(1) = 6deg; hr - 0.5deg

//10:15 142.5000
//10:10 115
//10:12 126

//8:30 75
//2:30 105
//00:01 5.5
//00:40 140
//2:55 117.5
//3:16 2
//4:22 1
//2:11 0.5
