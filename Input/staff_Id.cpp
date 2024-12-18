#include <iostream>
using namespace std;
int main(){
    int id;
    string name;
    char gender;
    int hour;
    float money;
    float salary;
    float tax;
    float totalSalary;
        cout<<"enter id =";
        cin>>id;
        cout<<"enter name =";
        cin>>name;
        cout<<"enter gender =";
        cin>>gender;
        cout<<"enter hour =";
        cin>>hour;
        cout<<"money =";
        cin>>money;

         salary = money * hour;

         tax = 0.1 * salary;

         totalSalary = salary - tax;

         cout<<"================================="<<endl;

         cout<<"staff id ="<<id<<endl;
         cout<<"staff name ="<<name<<endl;
         cout<<"staff gender ="<<gender<<endl;
         cout<<"staff hour ="<<hour<<"h"<<endl;
         cout<<"staff money ="<<money<<"$"<<endl;
         cout<<"staff salary ="<<salary<<"$"<<endl;
         cout<<"staff tax ="<<tax<<"$"<<endl;
         cout<<"staff total salary ="<<totalSalary<<"$"<<endl;





}