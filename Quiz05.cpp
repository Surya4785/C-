// Given the length and breadth of rectangle, write a program to find whether the area of the rectangle is greater than its
// perimeter.

#include<iostream>
using namespace std;

int main(){
    int l;
    cout<<"enter the length of rectangle: ";
    cin>>l;

    int b;
    cout<<"enter the breadth of rectangle: ";
    cin>>b;

    cout<<"Area is: "<<l*b<<endl;
    cout<<"Perimeter is: "<<2*(l+b)<<endl;

    if((l*b)>2*(l+b)){
       cout<<"Yes, Area is greater than perimeter.";}
       
    else cout<<"No, Area is not greater than perimeter.";  
}