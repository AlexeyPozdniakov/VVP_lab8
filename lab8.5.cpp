#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if (x>0) {
        if (x%2==0) {
            cout<<"Positive Even"<<endl;
        }
        else { cout<<"Positive Odd"<<endl; }
    }
    else if (x==0) { cout<<"Zero"<<endl; }
    else { 
        if (x%2==0) {
            cout<<"Negative Even"<<endl;
        }
        else { cout<<"Negative Odd"<<endl; }
    }
    return 0;
}
