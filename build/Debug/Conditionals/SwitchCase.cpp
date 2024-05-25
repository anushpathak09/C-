#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the  value of a: ";
    cin>>a;

    switch(a){
        case 0:
        cout<<"zero";
        break;
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"Two";
        break;
        default:
        cout<<"Not a valid input!";
        break;
    }
}