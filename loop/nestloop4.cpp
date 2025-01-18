#include <iostream>
using namespace std;
int main(){
    int N=7;
    for (int i=1 ; i<=N; i++)
    {
        for (int j= i ; j<=N ; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k<=i ; k++)
        {
            if (i % 2 == 0)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
     cout<<endl;
    }
    
}