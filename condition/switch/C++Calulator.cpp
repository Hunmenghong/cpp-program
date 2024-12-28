#include <iostream>

using namespace std;

int main(){
    int a,b,opt,result;
    cout<<"C++ Calculator"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divite"<<endl;

    cout<<"-----------------------"<<endl;

    cout<<"Enter option [1-4] : ";
    cin>>opt;
    cout<<"Enter value of first number  :";
    cin>>a;
    cout<<"Enter value of second number  :";
    cin>>b;

    switch (opt)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:  
        result = a / b;
        break;
    default:
        cout<<"Opt mean tea 4 tehhh kom jes tea dak!!!"<<endl;
        break;
    }
    cout <<"Result = "<<result;


}