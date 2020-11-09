#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,lb,lc;
    cout<<"Input coordinates of points";
    cin>>ax>>ay>>bx>>by>>cx;
       lb=sqrt(pow(ax-bx,2)+pow(ay-by,2));
       lc=sqrt(pow(ax-cx,2)+pow(ay-cy,2));
    if (lb>lc) {
        cout<<"C: "<<lc<<endl;
    }
    else {
        cout<<"B: "<<lb<<endl;
    }
    return 0;
}
