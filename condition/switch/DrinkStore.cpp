#include <iostream>
using namespace std;
int main(){
    int opt,qty;
    float payment,discount,total;
    string promocord;
    char answer;

    cout<<"Drink store"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"1. Coca.     $0.5"<<endl;
    cout<<"2. Sting     $1"<<endl;
    cout<<"3. Fanta     $1.5 (Getn 5% off on 5 or more cans)"<<endl;
    cout<<"4. Pepsi     $1.5 (Use promo cord: Prozzsart for 10% off)"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Enter the number of your choice: ";
    cin>>opt;
    cout<<"Enter the quantity: ";
    cin>>qty;

    switch (opt)
    {
    case 1:
        payment = qty * 0.5;
        break;
    case 2:
        payment = qty * 1;
        break;
    case 3:
        if (qty >= 5)
        {
            discount =5;
            total = (1.5 * qty);
            payment = total -( 0.5 * total);
        }
        break;
    case 4:
    cout<<"Do you have a promo cord???";
    cin>>answer;
        if (answer== 'y' || answer== 'n')
        {
            cout<<"Enter Your Promo Cord : ";
            cin>>promocord;
            if (promocord=="HongJerm")
            {
                cout<<"You get discount 10%";
                discount = 10;
                total = 1.5 * qty;
                payment = total -0.1*total;
            }
            
        }
        break;
        
    default:
        break;
    }

    cout<<"Total Payment: "<<payment<<"$";
}