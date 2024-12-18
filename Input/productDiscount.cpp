#include <iostream>
using namespace std;
int main(){
    int code;
    string name;
    int price;
    float qty;
    float total;
    float discount = 20 ;
    float save;
    float payment;

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