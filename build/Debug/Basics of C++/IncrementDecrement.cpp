// #include <iostream>
// using namespace std;

// int main(){
//     //Code for increment with 3 types.
//     int x=3;
//     cout<<x<<endl;
//     // x=x+1; //Type-1
//     // x+=1; //Type-2
//     x++; //Type-3 output 4

//     cout<<x<<endl;

//     // // simillarly for decrement 
//     // x=x-1; //Type-1
//     // x-=1; //Type-2
//     x--; //Type-3 x is 4 and when subtracting x with 1 then value is 3.so output is 3.
//     cout<<x<<endl;
    

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x=4;
//     cout<<x<<endl; //output 4
//     x++; 
//     cout<<x<<endl; // Output 5
//     cout<<x++<<endl; // Output 5 because it's not a preincrement of variable x (preincrement=++x;)
//     cout<<x<<endl; // Output 5
// }


#include <iostream>
using namespace std;
int main(){
    int x=4;
    cout<<x<<endl; //output 4
    x++; 
    cout<<x<<endl; // Output 5
    cout<<++x<<endl; // Output 6 because it's preincrement of variable x (preincrement=++x;)
    cout<<x<<endl; // Output 6
}