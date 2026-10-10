#include <iostream>
#include <math.h>
using namespace std;
int m(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<min(a,b);
    cout<<max(a,b);
    int c;
    cin>>c;
    cout<<max({a,b,c});
    cout<<m(a,b);
}