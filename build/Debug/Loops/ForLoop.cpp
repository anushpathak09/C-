#include <iostream>
using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++) {
//         if (i == 1) {
//             cout << "one" << endl;
//         } else if (i == 2) {
//             cout << "two" << endl;
//         } else if (i == 3) {
//             cout << "three" << endl;
//         } else if (i == 4) {
//             cout << "four" << endl;
//         } else if (i == 5) {
//             cout << "five" << endl;
//         } else if (i == 6) {
//             cout << "six" << endl;
//         } else if (i == 7) {
//             cout << "seven" << endl;
//         } else if (i == 8) {
//             cout << "eight" << endl;
//         } else if (i == 9) {
//             cout << "nine" << endl;
//         } else {
//             if (i % 2 == 0) {
//                 cout << "even" << endl;
//             } else {
//                 cout << "odd" << endl;
//             }
//         }
//     }

//     return 0;
// }

// Printing the hello world 10 times.
// int main(){
//     for (int i=0; i<10; i++){
//         cout<<"Hello World!"<<endl;
//     }
// }

// Printing the even number from 1-100.
// int main(){
//     for (int i=1; i<=100; i++){
//         if(i%2==0){
//             cout<<"Even: " <<i<<" ";
//         }
//         else{
//             cout<<"Odd: " <<i<<" ";
//         }
//     }
// }

//Printing AP of 1,3,5,7,9,....nth term.

// This qsn solved by two methods 
// Method 1.

// int main(){
//     int n;
//     cout<<"Enter the value of n: "; cin>>n;

//     for (int i=1; i<=n; i+=2){
//         cout<<i<<" "; 
//     }
// }

//Method-2

// int main(){
//     int n;
//     cout<<"Enter the value of n: "; 
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//             cout<<i<<" ";
//     }
    
// }

//Highest factor of a input number.
//BAD code.

// int main(){
//     int n;
//     int f=1;
//     cout<<"Enter number for factorial: "; cin>>n;
    
//     for(int i=1;i<n;i++){
//         if(n%i==0) f=i;
//         { 
//         }
//     }
//         cout<<f<<" ";
// }

//Good Code
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
