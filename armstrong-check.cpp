#include <iostream>
using namespace std;

int main()
{
    int num;
    int arm = 0;
    cout << "Enter a number:";
    cin >> num;

    int x = num;

    while (num > 0)
    {
        int rem = num % 10;
        arm = arm + rem * rem * rem;
        num = num / 10;
    }

    if (arm == x)
    {
        cout <<x<< " is armstrong number";
    }
    else
    {
        cout <<x<< " is not armstrong number";
    }

    return 0;
}
