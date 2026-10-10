#include <iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18)
    {
        cout<<"Not eligible for job";
    }
    else if(age>=18)
    {
        cout<<"eligible for job";
        if(age>=55 && age<=57)
        {
            cout<<", but retirement soon.";
        }
    }
    else if(age>57)
        {
            cout<<"retirement time";
        }
}