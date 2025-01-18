#include <iostream>

using namespace std;
int main(){
    int count;
    int sum = 0;

    cout<< "Enter no of number to sum : ";
    cin>>count;

    for(int i = 1; i<=count; i++){
        
        sum += 2*i; //like than -->  sum = sum + i;  
    }
    cout<< "Answer of sum : "<<sum;
}


//note:
// i = 1; i<=5; true; sum = sum + i = 0 + 1 = 1;
// i = 2; i<=5; true; sum = sum + i = 1 + 2 = 3;
// i = 3; i<=5; true; sum = sum + i = 3 + 3 = 6
// i = 4; i<=5; true; sum = sum + i = 6 + 4 = 10;
// i = 5; i<=5; true; sum = sum + i = 10 + 5 = 15;
// i = 6; i<=5; true; execute