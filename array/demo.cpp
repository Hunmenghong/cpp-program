#include <iostream>
using namespace std;
int main(){

    int number;//store data only one
    int id[20];
    string name[20];
    char gender[20];
    float html[20],css[20],js[20],total[20],avg[20];
    int count;
    // cout<< num[0];
    // cout<< num[1];
    // cout<< num[2];
    cout<< "enter number of data : ";
    cin>>count;
    for(int i = 0; i<count; i++){
        cout<< "student"<<i+1<<":"<<endl;
        cout<< "\tenter id : ";
        cin>>id[i];
        cout<< "\tenter name : ";
        cin>>name[i];
        cout<< "\tenter gender : ";
        cin>>gender[i];
        cout<< "\t-------------->> html : ";
        cin>>html[i];
        cout<< "\t-------------->> css : ";
        cin>>css[i];
        cout<< "\t-------------->> js : ";
        cin>>js[i];
        
    }
     for (int i = 0; i < count; i++)
    {
        cout<< "student"<<i+1<<":"<<endl;
        total[i] = html[i] + css[i] + js[i];
        avg[i] = total[i] / 3;
        cout<< "Name = "<<name[i]<<endl;
        cout<<"Total = "<<total[i]<<endl;
        cout<<"average = "<<avg[i]<<endl;
    }
   

    
}
