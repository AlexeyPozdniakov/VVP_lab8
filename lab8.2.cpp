#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum,m1,m2;
    cout << "Input numbers" << endl;
    cin>>a>>b>>c;
    if (a>b) {
        if (b>c) {
            sum=a+b;
        }
        else {
            sum=a+c;
        }
    }
    else {
        if (a>c) {
            sum=a+b;
        }
        else {
            sum=b+c;
        }
    }
    cout<< "Result=" << sum;
    return 0;
}
