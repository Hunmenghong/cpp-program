#include <iostream>

using namespace std;

int main(){

    int number;
     cout<<"Enter number ="<<endl;
     cout<<"=================="<<endl;

     cout<<"This number is : ";
     cin>>number;
        if(number == 0)//1 == 0
        {         
            cout<<"This number is zero"<<endl;
        }
        if (number > 0)
        {
            cout<<"This number is Positive"<<endl;

        }
        if(number < 0){ 
            cout<<"This number is negative"<<endl;
        }

}