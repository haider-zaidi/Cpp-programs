#include<iostream>
using namespace std;

int main(){
    
    // int marks;
    // cout<<"Student, Please enter marks to calculate grade:";
    // cin>>marks;

    // if(marks>=90){
    //     cout<<"A";
    // }
    // else if(marks>=80 && marks<90){
    //     cout<<"B";
    // }
    // else if(marks>=70 && marks<80){
    //     cout<<"C";
    // }
    // else{
    //     cout<<"Pass";
    // }

    int a;
    cin>>a;
    switch(a){
        case 1:
        cout<<"The value of a is 1";
        break;
        case 2:
        cout<<"The value of a is 2";
        break;
        case 3:
        cout<<"The value of a is 3";
        break;
        default:
        cout<<"Default will always printed";
    }
     
    return 0;

}