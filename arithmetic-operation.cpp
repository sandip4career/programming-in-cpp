#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void division(int,int);
void mod(int,int);

int main()
{
    add(45,65);
    sub(74,54);
    mul(5,4);
    division(10,2);
    mod(10,4);
}

void add(int a,int b)
    {

    cout<<"Enter two number:";
    cin>>a>>b;


    cout<<"Addition of two number:"<<a+b<<endl;

    }

void sub(int a,int b)
    {

    cout<<"Enter two number:";
    cin>>a>>b;


    cout<<"Subtraction of two number:"<<a-b<<endl;

    }

void mul(int a,int b)
    {

    cout<<"Enter two number:";
    cin>>a>>b;


    cout<<"Multiplication of two number:"<<a*b<<endl;

    }

void division(int a,int b)
    {

    cout<<"Enter two number:";
    cin>>a>>b;


    cout<<"Division of two number:"<<a/b<<endl;

    }


void mod(int a,int b)
    {

    cout<<"Enter two number:";
    cin>>a>>b;


    cout<<"Modulus of two number:"<<a%b<<endl;

    }
