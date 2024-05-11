#include <stdio.h>

int main()
{
    long long p, q;

    while (scanf("%lld %lld", &p, &q) == 2)
    {
        if (p > q)
            printf ("%lld\n", p - q);
        else
            printf ("%lld\n", q - p);
    }

    return 0;
}
