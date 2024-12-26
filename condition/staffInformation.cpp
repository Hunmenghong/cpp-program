#include <iostream>

using namespace std;

int main(){

    int id,hour;
    string name;
    char gender;
    float money,tax,salary,totalsalary;

    cout<<"enter id =";
    cin>>id;
    cout<<"enter name =";
    cin>>name;
    cout<<"enter gender =";
    cin>>gender;
    cout<<"enter salary = ";
    cin>>salary;
    
    cout <<"--------------------"<<endl<<endl;

    cout <<"staff Information"<<endl;
    cout<<"----------------------"<<endl;
    if(salary > 500){
        tax =   0.05 * salary;
    }
    else if (salary >=300)
    {
        tax = 0.04 * salary;
    }
    else if (salary >=250)
    {
        tax = 0.03 * salary;
    }
    else if (salary <250)
    {
        tax = 0.02 * salary;
    }

    totalsalary = salary - tax;

    cout<<"STAFF ID ="<<id<<endl;
    cout<<"STAFF NAME="<<name<<endl;
    cout<<"STAFF GENDER ="<<gender<<endl;
    cout<<"STAFF SALARY ="<<salary<<"$"<<endl;
    cout<<"STAFF TAX ="<<tax<<"$"<<endl;
    cout<<"TOTALSALARY="<<totalsalary<<"$"<<endl;    







    





}