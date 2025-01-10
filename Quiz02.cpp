// Take positive integers input and tell if it is divisible by 5 or not.

#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Ener a positive integer:";
    cin>>n;
    if(n%5==0) cout<<"Yes, It is divisible by 5.";
    else cout<<"No, It is not divisible by 5."; 
}