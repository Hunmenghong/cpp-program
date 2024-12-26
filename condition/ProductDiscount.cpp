#include <iostream>
using namespace std;
int main(){
    int code;
    string name;
    int price;
    float qty,total,discount,save,payment;

    cout <<"Please Enter Your Product Data :"<<endl;
    cout <<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl<<endl;
    
    cout<<"Enter code    :";
    cin>>code;
    cout<<"Enter name    :";
    cin>>name;
    cout<<"Enter price($) : ";
    cin>>price;
    cout<<"Enter qty  : ";
    cin>>qty;

    total = qty * price;
    save = total * 0.2;
    payment = total - save;
    
    if ( total > 500)
    {
        discount = 50;
    }
        else if ( total >= 400)
        {
            discount = 40;
        }
        else if ( total >= 300)
        {
            discount = 30;
        }
        else if ( total >= 200)
        {
            discount = 20;
        }
        else
        {
            discount = 0;      
        }
        

    
    cout <<"Output Data Of Product >"<<endl;
    cout <<"======================="<<endl;

    cout <<"Product code :"<<code<<endl;
    cout <<"Product name  :"<<name<<endl;
    cout <<"Product price :"<<price<<"$"<<endl;
    cout <<"Product qty :"<<qty<<endl;
    cout <<"Product total :"<<total<<"$"<<endl;
    cout <<"Product discount :"<<discount<<"%"<<endl;
    cout <<"Save money :"<<save<<"$"<<endl;
    cout <<"Product paymnet :"<<payment<<"$"<<endl;
    
}