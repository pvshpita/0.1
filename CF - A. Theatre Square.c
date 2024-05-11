#include <stdio.h>
int main()
{
    long long int n, m, a, q, p;
    scanf ("%lld%lld%lld", &n, &m, &a);

    if (n % a == 0) q = n/a;
    else q = n/a + 1;

    if(m % a == 0) p = m/a;
    else p = m/a + 1;

    printf("%lld\n", q * p);

    return 0;
}
