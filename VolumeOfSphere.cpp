#include<iostream>
using namespace std;
int main(){
    float r = 7;
    float pi = 3.1415;
    float Volume = (4.0/3.0)*pi*r*r*r;     //we can't use 4/3 because it will be rounded off to nearest lowest integer.
    cout<<"The Volume is : "<<Volume;
}