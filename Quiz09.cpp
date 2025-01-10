// Take 3 numbers input and tell if they can be sides of a triangle.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter first side: ";
    cin>>a;
    cout<<"enter second side: ";
    cin>>b;
    cout<<"enter third side: ";
    cin>>c;

    if((a+b)>c and (b+c)>a and (c+a)>b){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}
