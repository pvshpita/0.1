#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;
    int sum=0;
    cin >> n;

    cin>>a>>b>>c>>d;
    int sum1=a+b+c+d;
    int y=0; //int s = sum1;
    int k=1;

    for (int i = 0; i < n-1; i ++) {
        cin >> a >> b >> c >> d;
        sum = a + b + c + d;

        if(sum > sum1){
            k++;
        }

    }



    cout << k <<" "<< y << endl;

    return 0;
}

