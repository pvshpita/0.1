#include<iostream>
using namespace std;

int main ()
{
    int k, n, w;
    int cost = 0, need;
    cin >> k >> n >> w;

    for(int i = 1; i <= w; i ++){
        cost += i * k;
    }

    if(n >= cost) cout << "0" << endl;
    else {
        need = cost - n;
        cout << need << endl;
    }

    return 0;
}
