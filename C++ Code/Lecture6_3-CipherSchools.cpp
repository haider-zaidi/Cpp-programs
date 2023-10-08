#include<iostream>
using namespace std;

int main(){

    int i,input;
    i=1;
    // while(i<101){
    //     cout<<i<<" ";
    //     i++;
    // }

    for(i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"Congrats you have guessed correct";
            break;
        }
    }

    return 0;
    
}