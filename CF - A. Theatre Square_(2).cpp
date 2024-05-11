#include <iostream>
using ll = long long;
using namespace std;
int main()
{
    ll n, m, a, q, p;
    cin >> n >> m >> a;

    if (n % a == 0) q = n/a;
    else q = n/a + 1;

    if(m % a == 0) p = m/a;
    else p = m/a + 1;

    cout << p * q << endl;

    return 0;
}
