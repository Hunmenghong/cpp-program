// switch (expression)
// {
// case /* constant-expression */:
//     /* code *
//     break;

// default:
//     break;
// }


#include <iostream>

using namespace std;

int main(){
    int opt; 
    cout<< "enter option : ";
    cin>>opt;
    switch(opt)
    {
    case 1:
    case 5:
    case 7:
    case 8:
        cout<< "30 day"<<endl;
        break;
    case 2:
        cout<< "option 2  "<<endl;
        
    
    default:
    cout<< "NO option !! kom jes dak"<<endl;
        break;
    }
}


