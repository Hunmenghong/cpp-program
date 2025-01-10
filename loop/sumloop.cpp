#include <iostream>
using namespace std;
int main(){
    int count,number;
    int sum = 0;
    float average;

    cout<< "Sum of number Input"<<endl;
    cout<< "============================="<<endl;
    cout<< "Enter no of number : ";cin>>count;

    for (int i = 1; i <=count; i++)
    {
        cout<< "Enter number : ";
        cin>>number;
        sum = sum + number ;
    }
    average = sum /count;
    cout<<"Aswer of sum : "<<sum;
    cout<<"\nAswer of average : "<<average;

}