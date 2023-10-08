#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cout<<"Input integers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    // Statement a>b?
    // cout<<(a>b);
    // cout<<(a>b && c>d);
    cout<<(a>b || c>d);

    // C++ interprets 1 as true and 0 as false.

    return 0;

}