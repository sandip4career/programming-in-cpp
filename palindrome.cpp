#include<iostream>
using namespace std;

int main()
{
    int num;
    int rev=0;
    cout<<"Enter a number:";
    cin>>num;

    int original = num;
    while(num!=0){
        int rem = num%10;
        rev = rev*10+rem;
        num=num/10;
    }

    if(original == rev)
    {
        cout<<original<<" is palindrome";
    }else{
        cout<<original<<" is not palindrome";
    }


    return 0;
}
