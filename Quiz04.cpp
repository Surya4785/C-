// If cost price and selling price of an item is through the keyboard, write a program to determine wether the seller has made
// profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he inurred.

#include<iostream>
using namespace std;

int main(){
    int cp;
    cout<<"enter the cost price: ";
    cin>>cp;

    int sp;
    cout<<"enter the selling price: ";
    cin>>sp;

    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    } 
    if(sp<cp){  //cp<sp
        cout<<"loss is "<<cp-sp;
    }
    if(sp==cp){
        cout<<"no profit no loss";
    }
}