#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	cout << "Enter a number:";
	cin >> num;
	while (num > 0)
	{
		int rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}

	cout << "The num of " << num << " is " << sum;
	return 0;
}
