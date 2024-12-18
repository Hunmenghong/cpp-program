#include <iostream>

using namespace std;

int main()
{
    int student_id;
	string name; 
    char gender;
	float score;
    cout<< "\tEnter your dara "<<endl<<endl<<endl;
    cout<< "-------------------------------"<<endl;
    cout<< "Enter your id : ";
    cin>>student_id;
    cout<< "Enter name : ";
    cin>>name;
    cout<< "Enter gender : ";
    cin>>gender;

    cout<< "===============Output================="<<endl;
    cout<< "Student id : "<< student_id<<endl;
    cout<< "Student name : "<<name<<endl;
    cout<< "Student gender : "<<gender;
}