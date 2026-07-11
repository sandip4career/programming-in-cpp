#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	
	cout<<"Enter a number:";
	cin>>num;
	
	if(num>1){
		for(int i=1;i<=num;i++){
			if(num%i==0){
				count++;
			}
		}
		if(count==2){
			cout<<num<<" prime number:";
		}else{
			cout<<num<<" is not prime number:";
		}
	}else{
		cout<<num<<" is not prime number:";
	}
	return 0;
}
