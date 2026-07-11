#include<iostream>

using namespace std;
int main()
{
	int count=0,num;
	cout<<"Enter a number:";
	cin>>num;
	
	while(num>0){
		int rem = num%10;
		count++;
		num=num/10;	
	}
	
	cout<<"Count:"<<count;
	return 0;
}
