#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;

    for (int i = 0; i < t; i ++) {
        cin >> a >> b;
        if(a <= b) {
            if ( (2*a)*(2*a) >= b ) {
                if ( (2*a)*(2*a) > b*b ) cout << b*b << endl;
                else cout << (2*a)*(2*a) << endl;
            }
            else cout << b*b << endl;
        }
        else {
            if ( (2*b)*(2*b) >= a ) {
                if ( (2*b)*(2*b) > a*a ) cout << a*a << endl;
                else cout << (2*b)*(2*b) << endl;
            }
            else cout << a*a << endl;
        }
    }
    return 0;
}
