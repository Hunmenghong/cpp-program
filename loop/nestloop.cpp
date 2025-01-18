#include <iostream>
using namespace std;
//note : row loop 1 time col loop n time;
int main(){
    for(int i = 1 ; i<= 4; i++){//row
        for (int j = i ; j<=4 ; j++)//col
        {
            cout<< "*";
        }
        cout<<endl;
    }
}

///note : 
//i = 0; i<4; true; 
    //j = i = 0; j<4; true; *
    //j = i = 1; j<4; true; *
    //j = i = 2; j<4; true; *
    //j = i = 3; j<4; true; *
//i = 1; i<4; true;
    //j = i = 1; j<4; true; *
    //j = i = 2; j<4; true; *
    //j = i = 3; j<4; true; *
//i = 2; i<4; true; 
    //j = i = 2; j<4; true; *
    //j = i = 3; j<4; true; *
//i = 2; i<4; true;
    //j = i = 3; j<4; true; *