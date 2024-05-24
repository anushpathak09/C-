// #include <iostream>
// using namespace std;
// int main(){
//     int a=6,b=24;
//     cout<<a-b<<endl; //18 output
//     cout<<a+b<<endl; //30 output
//     cout<<a/b<<endl; //0 output because it's  give a float value. 
//     cout<<a%b<<endl; // 6 output
//     cout<<a*b<<endl; //144 output
// }

// Here in upper code a&b is a integral variable so while dividing it gives the output in a integer
// form but technically it should be in float value i.e a decimal value so to print it in decimal format 
// i use flaot datatype to do so.

#include <iostream>
using namespace std;
int main(){
    float a=6,b=24;
    cout<<a-b<<endl; 
    cout<<a+b<<endl;
    cout<<a/b<<endl;
    cout<<a*b<<endl; 
}
