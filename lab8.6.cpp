#include <iostream>
using namespace std;
int main()
{
    int a,a1,k;
    cout << "Input number" << endl;
        cin>>a;
    a1=a;
    k=0;
    while (a1>0)
    {
        a1=a1/10;
        k=k+1;
    }
    if (a%2==0)
    {
        cout<<"Even ";
    }
    else
    {
        cout<<"Odd ";
    }
    if (k==1)
    {
        cout<<"one digit ";
    }
    else if (k==2)
    {
        cout<<"two digit ";
    }
    else if (k==3)
    {
        cout<<"three digit ";
    }
    cout<<"number";
    return 0;
}
