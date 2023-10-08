#include<iostream>
using namespace std;

int main(){

    int password;

    do{
        cin>>password;
    }
    while(password<999999);

    // while(1){              
    //     cout<<"print chocolates"    --> endless loop
    // }

    /* Infinite loop using FOR loop:

    for(int i=0;;i++){
        cout<<"Hello";
    } */

    /*cout<<"Enter the password: ";
    cin>>password;

    while(password<999999){
        cout<<"Please enter pass again";
        cin>>password;
    }

    cout<<"You enter right password"; */

    return 0;

}