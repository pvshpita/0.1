#include<iostream>
using namespace std;

int main()
{
    int x, i, s = 0;
    int a[] = {5, 4, 3, 2, 1};

    cin >> x;

    for(i = 0; i < 5; i++)
    {
        s += x / a[i];
        x = x % a[i];
    }

    cout << s << endl;

    return 0;
}
