#include <iostream>
using namespace std;

int main(){
    int n;
    // int f=1;
    cout<<"Enter n: "; cin>>n;

    for(int i=n/2;i>=1;i--){
        if(n%i==0){ 
        //f=i; //Replace this code using break; 
        cout<<i<<" ";
        }
        break;
    }
}