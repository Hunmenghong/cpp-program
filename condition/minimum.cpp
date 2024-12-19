#include <iostream>

using namespace std;

int main(){

    int number1;
    int number2;
    int minimum;

    cout <<"Enter value of number 1 :";
    cin >>number1;
    cout <<"Enter value of number 2 :";
    cin >>number2;

     cout<<"-----------------------------"<<endl;

    if (number1 > number2)
    {
        minimum =number2;
    }
    if (number1 < number2)
    {
        minimum = number1;
        
    }
    
    cout<<"Minimum = "<<minimum<<endl;
    



}