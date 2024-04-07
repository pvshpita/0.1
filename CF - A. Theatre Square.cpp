#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n, m, a, num;
    cin >> n >> m >> a;

    num = ceil( (n*m) / (a*a) );

    cout << num << endl;

    return 0;
}
