#include <iostream>

using namespace std;
int main(){
    int student_ID;
    string name;
    char Gender;
    float math,kh,phy;
    float Total;
    cout<<"Enter Your Data"<<endl<<endl;
    cout<<"================"<<endl;
    cout<<"Enter Your id   : ";
    cin>>student_ID;
    cout<<"Enter name : ";
    cin>>name; 
    cout<<"Enter gender  : ";
    cin>>Gender ;
    cout<<"Enter score of math :";
    cin>>math;
    cout<<"Enter score of kh  : ";
    cin>>kh;
    cout<<"Enter score of phy  : ";
    cin>>phy;
    Total = math + kh + phy;
    
    cout<<"-------------OutPut-----------"<<endl;
    cout<<"Student id :"<<student_ID<<endl;
    cout<<"Student Name :"<<name<<endl;
    cout<<"Student Gender :"<<Gender<<endl;
    cout<<"Total Score  : "<<Total<<endl;


    
}