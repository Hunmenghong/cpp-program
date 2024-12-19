#include <iostream>

using namespace std;

int main(){
    int year,month;

    // if(a == 1 && sex == 'M'){
    //     cout<< "You get discount "<<endl;
    // }
    // if(a == 1 || sex == 'M'){
    //     cout<< "You get discount "<<endl;
    // }
    cout<< "Enter year  : ";
    cin>> year;
    cout<< "Enter month : ";
    cin>>month;

    if(month == 1 || month == 3 || month == 5 || month == 7
     || month == 8 || month == 10 || month == 12){
        cout<< "This month have 31 days"<<endl;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout<< "This month have 30 days"<<endl;
    }
    if (month == 2 && year % 4 == 0 )
    {
        
        cout<< "This month have 29 days"<<endl;

     }
     else
     {
      
        cout<< "This month have 28 days"<<endl;
     }
}