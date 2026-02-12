#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Person
{
private:
    char name[20];

protected:
    void SetName(char *n)
    {
        strcpy(name,n);
    }

public:
    char *getName()
    {
        return(name);
    }
};

class Employee:public Person
{
private:
    float salary;

protected:
    void SetSalary(float s)
    {
        salary = s;

    }

public:
    float getSalary()
    {
        return(salary);

    }

    void SetEmployee(char *n,float s)
    {
        SetName(n);
        salary =s;
    }

};

int main()
{
    Employee e1;
    e1.SetEmployee("Rahul",5000);

    cout<<"\nName: "<<e1.getName();
    cout<<"\nSalary: "<<e1.getSalary();

    getch();

    return 0;
}
