#include<iostream>

using namespace std;

int main(){
    int i,count;
    cout<< "Enter number of loop : ";
    cin>>count;
    for(i=count; i>0; i--)
    {
        cout<<i<<endl;
    }   
    //note:
        //i = 0; i<5; true; hello loop
        //i = 1; i<5; true; hello loop
        //i = 2; i<5; true; hello loop
        //i = 3; i<5; true; hello loop
        //i= 4; i<5; true; hello loop
        //i=5; i<5; false; no execute
}