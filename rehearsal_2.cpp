#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float sum , x;
    cout << "Enter x: ";
    cin >> x ;
    while (x != 0)
    {
        if (x > 0)
        {
            sum = sum + x;
        }else{
            ;
        }
        cout << "Enter x: ";
        cin >> x ;
    }
    cout << "sum = " << sum;
    return 0;
}
