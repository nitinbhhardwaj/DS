#include <iostream>
using namespace std;
// void fun(string &s)
// {
//     s[0]='q';
//     cout<<s<<endl;
    
// }
void change(int arr[])
{
    arr[0]+=9;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main()
{
    int arr[5]={1,2,4,5,7};
    change(arr);
    
    cout<<"Value inside int main: "<<arr[0]<<endl;
    // string s;
    // cin>>s;
    // fun(s);
    // cout<<s;
    return 0;
}