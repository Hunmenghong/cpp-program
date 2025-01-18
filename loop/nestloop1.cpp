#include <iostream>
using namespace std;
int main(){
    for(int i = 1 ; i<= 4; i++){//row
        for (int j = 1 ; j<=i ; j++)//column
        {
            cout<< "1";
        }
        cout<<endl;
    }
}