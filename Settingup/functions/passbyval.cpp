#include <iostream>
using namespace std;
void fun(string s)
{
    s[0]='q';
    cout<<s<<endl;
    
}
int main()
{
    string s;
    cin>>s;
    fun(s);
    cout<<s;
    return 0;
}