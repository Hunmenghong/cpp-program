#include <iostream>

using namespace std;
int main(){
    int count;
    int sum = 0;  

    cout<< "Enter no of number to sum : ";
    cin>>count;

    for(int i = 1; i<=count; i++){
        
        sum += i*2;//sum = sum+1
    }
    cout<< "Answer of sum : "<<sum;
}