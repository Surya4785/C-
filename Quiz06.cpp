// Take a positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(n>99 and n<1000){   // and or && : you can use both
        cout<<"It's a three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
}