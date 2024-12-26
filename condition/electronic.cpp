#include <iostream>
using namespace std;
int main(){
     int newMonth , oldMonth , use , payment;

     cout <<"Enter newMonth = ";
     cin>> newMonth;
     cout <<"Enter oldMonth = ";
     cin>> oldMonth;

     if ( newMonth < oldMonth)
     {
        cout<< "the value incorrect!! input again "<<endl;
     }
     else
     {
        use = newMonth - oldMonth;
        if ( use <= 50)
        {
            payment = 350 * use;
        }
        else if ( use < 100)//80
        {
            payment = 50*350 + (use - 50) * 400;//50*350 + (use - 50) * 400
        }
        else if ( use <= 150)
        {
            payment = 50*350 + 50*400 + (use -100) *500;
        }
        else if ( use < 200)
        {
            payment = 50*350 + 50*400 + 50*500 + (use -150) *600;
        }
        else
        {
            payment = 50*350 + 50*400 + 50*500 + 50*600 + (use -200)*700;
        }
        cout<<"total use = "<<use<<"kw"<<endl;
        cout<<"Nis luy merl klun eng tv : "<<payment;
        return 0;
        
        
     }
     


}