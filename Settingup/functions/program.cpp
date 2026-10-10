#include<iostream>
using namespace std;
//Functions are set of code which performs something for you
//Functions are used to modularise code
//Functions are used to increase modularity
//Functions are used to use same code multiple times
//void ->which does not return anything
//return -> it does return something
//parameterised 
//non parameterised
void greet(string name)
{
    cout<<"Hello "<<name<<endl;
}
int main()
{
    string name1;
    cin>>name1;
    greet(name1);
    string name2;
    
    cin>>name2;
    greet(name2);
    return 0;
}