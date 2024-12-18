#include <iostream> 

using namespace std;
int main(){
    int id;
    string name;
    char gender;
    float gpa;
    string result;

    cout<<"enter id :";
    cin>>id;
    cout<<"enter name :";
    cin>>name;
    cout<<"enter genderm :";
    cin>>gender;
    cout<<"enter gpa :";
    cin>>gpa;
    if ( gpa >= 50)
    {
        result = "Pass";

    }
    if ( gpa < 50)
    {
        result = "false";
    }
    cout<<"==============================="<<endl;

            cout<<"Student Id ="<<id<<endl;
            cout<<"Student name ="<<name<<endl;
            cout<<"Student gender ="<<gender<<endl;
            cout<<"Student gpa ="<<gpa<<endl;
            cout<<"Student result ="<<result<<endl;

    
    
    

}