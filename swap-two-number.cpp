
#include<iostream>
using namespace std;

int main()
{
    int a=3,b=4;
    cout<<"Before swapping:"<<"A="<<a<<" "<<"B="<<b;

    cout<<endl;
    int temp = a;
    a = b;
    b = temp;

    cout<<"After swapping:"<<"A="<<a<<" "<<"B="<<b;
    return 0;
}
