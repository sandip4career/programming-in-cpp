#include<iostream>

using namespace std;

int main()
{
    int N,sum=0;

    cout<<"Enter a number:";
    cin>>N;

    for(int i=0;i<=N;i++)
    {
        sum=sum+i;
    }

    cout<<sum;
    return 0;
}
