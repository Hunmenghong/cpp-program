#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i = 0 ; i <=4; i++)
    {
        for (int k = 0 ; k<=i ; k++)
        {
           sum= k+1;
           cout<<sum;
        }
        
     cout<<endl;
    }
    
}