#include <iostream>

using namespace std;

int main(){

    int number1;
    int number2;
    int maximum;

    cout<<"Enter value of number 1 :";
    cin>>number1;
    cout<<"Enter value of number 2 :";
    cin>>number2;

    cout<<"-------------------------"<<endl;

    if (number1 > number2)
    {
        maximum = number1;

    }
    if(number2 > number1){
        maximum = number2;
    }
    if(number1 == number2){
        cout<< "Number1 and number are eqaul !!"<<endl;
        return 0;
    }
    cout<<"Maximum "<<maximum<<endl;




    

}