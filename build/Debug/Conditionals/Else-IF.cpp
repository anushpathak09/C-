#include <iostream>
using namespace std;
int main(){

int score ;
cout<<"Enter mark: ";
cin>>score;

if (score == 100) {
    cout << "Superb";
}
else if (score >= 90) {
    cout << "Excellent";
}
else if (score >= 80) {
    cout << "Very Good";
}
else if (score >= 70) {
    cout << "Good";
}
else if (score >= 60){
    cout << "OK";
}

else{
    cout << "Try hard";}
}