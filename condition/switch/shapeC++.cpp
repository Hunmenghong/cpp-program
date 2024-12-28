#include <iostream>
using namespace std;
int main(){
    int length,width,opt,base,height;
    float area,radius;
    cout<<"Area of shape app"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"1.Rectangle\t2.Circle\t3.Traingle\t4.Exit"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Chose one option[1-4] :";
    cin>>opt;  
    switch (opt)
    {
    case 1:
        cout<<"Enter Length :";
        cin>>length ;
        cout<<"Enter Width :";
        cin>>width;
        area = length * width;
        cout<<"This area of Rectangle :"<<area;
        break;
    case 2:
        cout<<"Enter Radius :";
        cin>>radius;
        area =3.14 * radius * radius;
        cout<<"This area of Circle :"<<area;
        break;
    case 3:
        cout<<"Enter Base :";
        cin>>base;
        cout<<"Enter Height :";
        cin>>height;
        area = 0.5 * base * height;
        cout<<"This area of Traingle :"<<area;
        break;
    case 4:
        break;
    default:
        break;
    }
    return 0;
}