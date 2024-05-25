#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;

    // if (a%2==0) cout<<a<<": is a even number" ;
    // else cout<<a<<": is odd number";

    //condition? IF True: IF False;
    (a%2==0)? cout<<"Even": cout<<"Odd"; //This is a ternary statement.
    
}