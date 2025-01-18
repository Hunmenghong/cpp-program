#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int count,id[50];
    string name[50];
    char gender[10];
    float salary[20],taxrate[20],net_salary[20],cross_salary[20];

    cout<<"Staff Information"<<endl;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    cout<<"enter number of staff to register: ";
    cin>>count;
    cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

    for (int i = 1; i <=count; i++)
    {
        cout<<"Staff  "<<i<<endl;
        cout<<"\tEnter id :";
        cin>>id[i];
        cout<<"\tEnter Name :";
        cin>>name[i];
        cout<<"\tEnter Gender :";
        cin>>gender[i];
        cout<<"\tEnter Salary :";
        cin>>salary[i];

    }
    for (int i = 1; i <= count; i++)
    {
        if(salary[1] > 500){
            taxrate[i] =   0.05;
        }
        else if (salary[1] >=300)
        {
            taxrate[i] = 0.04;
        }
        else if (salary[i] >=250)
        {
        taxrate[i] = 0.03;
        }
        else if (salary[i] <250)
        {
        taxrate[i] = 0.02;
        }

        net_salary[i] = taxrate[i] * salary[i];
        cross_salary[i] =  salary[i] - net_salary[i] ;
    }
    
        cout<<">>>>>>>> list of staff <<<<<<<<<"<<endl;
        cout<<"***-_-_-_-_-_-_-_-_-_-_-_-_-***"<<endl;
        cout<<left;
        cout<<setw(8)<<"Id"
            <<setw(10)<<"Name"
            <<setw(10)<<"Gender"
            <<setw(20)<<"Texrate"
            <<setw(20)<<"Net-Salary"
            <<setw(20)<<"Cross-Salary"<<endl;
    
    for (int i = 1; i <=count; i++)
    {
        cout<<left;
        cout<<setw(8)<<id[i]
            <<setw(10)<<name[i]
            <<setw(10)<<gender[i]
            <<setw(20)<<taxrate[i]
            <<setw(20)<<setprecision(5)<<net_salary[i]
            <<setw(20)<<setprecision(5)<<cross_salary[i]<<endl;

    }
    
}