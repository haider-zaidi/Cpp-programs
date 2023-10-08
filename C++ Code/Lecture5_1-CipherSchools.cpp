#include<iostream>
using namespace std;

int main(){

    // int a[4];
    // cout<<"Give 5 integers as input: ";

    // for(int i=0;i<5;i++){
    //     cin>>a[i];
    // }

    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }

    int a[10];
    cout<<"Give 10 integers as input: ";

     for(int i=0;i<10;i++){
         cin>>a[i];
    }

    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";

    }
    

    return 0;

}