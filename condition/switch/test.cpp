#include <iostream>
   
using namespace std;
int main(){
    int opt,qty;
    float total,discount,payment;
    string promocord,answer;
    system("cls");
    cout<<"---------> AH BEE Drink Store <-----------"<<endl;
    cout<<"1.Cambodia Beer  1.25$"<<endl;
    cout<<"2.Arnchor Beer   1.5$"<<endl;
    cout<<"3.Hanuman Beer   1.75$ (Ber Tinh 5 or lers 5 k'pong discount oy 5%)"<<endl;
    cout<<"4.ABC Beer       2.5$ (Ber mean promocord: DUMA DUMA discount oy 10%) "<<endl;
    cout<<"=================================="<<endl;

    cout<<"Jog tinh sra muy nah rers muy mk: ";
    cin>>opt;
    cout<<"Jog tinh man k'pong del loveee: ";
    cin>>qty;
    
    switch (opt)
    {
    case 1:
        payment = qty * 1.25;
        break;
    case 2:
        payment = qty * 1.5;
        break;
    case 3:
        if (qty >=5)
        {
            cout<<"Discount oy 5% jos "<<endl;
            discount = 5;
        }
        else
        {
            discount = 0;
        }
            total = qty * 1.75;
            payment = total - discount/100 * qty;
        break;
    case 4:
        cout<<"Mean promocord ot ng????"<<endl;
        cin>>answer;
        if (answer == "Mean")
        {
            cout<<"P'jol promocord mk jg: ";
            fflush(stdin);
            getline(cin,promocord);
            cin>>promocord;

            if (promocord == "duma duma")
            {
                cout<<"Discount oy 10% jos"<<endl;
                discount = 10;
            }
            else
            {
                discount = 0;
            }
        }
        else
        {
            cout<<"Ngob ot mean promocord phg ng!!!"<<endl;
            cout<<"Jg kit t'lai derm hz"<<endl;
        }
            total = qty * 2.5;
            payment = total - discount/100 *qty;
        break;
    default:
        break;
    }
    cout<<"S'rub luy os pon ng merl tvvvvv : "<<payment<<"$";
}