#include <iostream>
using namespace std;

int main ()
{
    //variables initialization
    int num, reverse = 0, rem;
    cout <<"Enter the number :"<<endl; 
    cin>>num;
  
    //loop to find reverse number
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    };
 
    cout <<"\nReversed Number: "<<reverse;
    
    return 0;
}
