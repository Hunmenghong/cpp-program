#include <iostream>
using namespace std;
int main(){
    int length,width;
    char opt;
    float area,radius,parimet;
    cout<<"Area and Parimet Of Shape"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"a.Area"<<endl;
    cout<<"b.Parimet"<<endl;
    cout<<"c.Exit"<<endl;
    cout<<"Enter Option : ";
    cin>>opt;

    switch (opt)
    {
    case 'a':
        cout<<"<<-Area of shape->>"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"1.Rectangle"<<endl;
        cout<<"2.Circle"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Chose one option[1-3] :";
        cin>>opt;  
        switch (opt)
        {
        case '1':
            cout<<"Enter Length :";
            cin>>length ;
            cout<<"Enter Width :";
            cin>>width;
            area = length * width;
            cout<<"This area of Rectangle :"<<area;
            break;
        case '2':
            cout<<"Enter Radius :";
            cin>>radius;
            area =3.14 * radius * radius;
            cout<<"This area of Circle :"<<area;
            break;
        case '3':
            break;
        default:
            break;
        }
        break;
    case 'b':
        cout<<"<<-Parimet of shape->>"<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"1.Rectangle"<<endl;
        cout<<"2.Circle"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Chose one option[1-3] :";
        cin>>opt;  
        switch (opt)
        {
        case '1':
            cout<<"Enter Length :";
            cin>>length ;
            cout<<"Enter Width :";
            cin>>width;
            parimet = 2*(length + width);
            cout<<"This Parimet of Rectangle :"<<parimet;
            break;
        case '2':
            cout<<"Enter Radius :";
            cin>>radius;
            parimet =3.14 * 2 * radius;
            cout<<"This Parimet of Circle :"<<parimet;
            break;
        case '3':
            break;
        default:
            break;
        }
        break;
    case 'c':
        break;
    default:
        break;
    }
    
}