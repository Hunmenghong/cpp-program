#include <iostream>

using namespace std;

int main(){
    int a;
    char b;

    cout<< "Enter value of a : ";
    cin>>a;

    if(a > 50){
        cout<< "The value of a > 50"<<endl;
        b = 'A';
    }
    else if(a > 40){//if(a <= 50 && a > 40)
        cout<< "The value of a 40 - 50"<<endl;
        b = 40;
    }
    else if(a > 30){
        cout<< "The value of a 30 - 40"<<endl;
    }
    else{
        cout<< "The value of a < 30"<<endl;
    }
    cout<< "B = "<<b;
    return 0;
}