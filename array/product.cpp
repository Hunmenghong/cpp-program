#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int code[50],qty[50],count;
    string name[50];
    float price[50],total[50],payment[50],discount[50];
    
    cout<<"Please enter product data"<<endl;
    cout<<"==============================="<<endl;
    cout<<"Enter number of product = ";
    cin>>count;

        for (int i = 1; i <= count; i++)
        {
            cout<<"product  "<<i<<endl;
            cout<<"\tEnter code   :";
            cin>>code[i];
            cout<<"\tEnter name   :";
            cin>>name[i];
            cout<<"\tEnter qty    :";
            cin>>qty[i];
            cout<<"\tEnter price  :";
            cin>>price[i];

                if (qty[i]>= 50 )
                {
                    discount[i]=10;
                }
                else{
                    discount[i]=0;
                }
            
            total[i] = qty[i] * price[i];
            payment[i] = total[i] - discount[i]/100 * total[i];
        }
            cout<<"View Product list"<<endl;
            cout<<"************************"<<endl;
            cout<<left;
            cout<<setw(10)<<"CODE" 
                <<setw(10)<<"NAME"
                <<setw(10)<<"QTY"
                <<setw(10)<<"PRICE"
                <<setw(10)<<"TOTAL"
                <<setw(10)<<"PAYMENT"<<endl;
        for (int i = 1; i <= count; i++)
        {
            cout<<left;
            cout<<setw(10)<<code[i]
                <<setw(10)<<name[i]
                <<setw(10)<<qty[i]
                <<setw(10)<<price[i]
                <<setw(10)<<total[i]
                <<setw(10)<<payment[i]<<endl;

        }
        
}