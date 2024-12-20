#include <iostream>

using namespace std;

int main(){

    int id;
    string name;
    float gpa;
    char grade;
 

    cout <<"-------------------"<<endl;
    cout <<"Enter id :";
    cin >>id;
    cout <<"Enter name : ";
    cin >>name;
    cout <<"Enter gpa :";
    cin >>gpa;

        if ( gpa >= 95)
        {
            grade ='A';
        }
        else if( gpa >= 85)
        { 
            grade ='B';
        }
        else if ( gpa >= 75)
        {
            grade ='C';
        }
        else if ( gpa >= 60)
        {
            grade ='D';
        }
        else if ( gpa >= 50)
        {
            grade ='E';
        }
        else
        {
            grade ='F';
        }
        
        cout <<"-----------------------"<<endl;
        cout <<"Student id :"<<id<<endl;
        cout <<"Student name :"<<name<<endl;
        cout <<"Student gpa :"<<gpa<<endl;
        cout <<"Student grade :"<<grade<<endl;
        
}

