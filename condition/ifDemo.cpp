//note : syntax if:

// if(condition){
//    statement code;

//}

#include <iostream>

using namespace std;
int main(){

    int a ;
    cout<< "Enter value of a : ";
    cin>>a;

    if(a > 10)
    {
         cout<< "a > 10"<<endl;
         cout<< "Pass"<<endl;
         a = a + 10;
    }
    else{//a <= 10
        cout<< " a <= 10"<<endl;
        cout<< "false"<<endl;
    }


    cout<< "out of condition"<<endl;


}