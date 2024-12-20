 #include <iostream>

 using namespace std;

 int main(){

    string username,password;

        cout <<"Enter username :";
        cin >>username;
        cout <<"Enter password :";
        cin >>password;

        cout<<"----------------------"<<endl;
        if(username == "Admin")
        {
            if(password == "Admin120"){
                cout<< "Login succefull"<<endl;
            }
            else{
                cout<< "Password not correct "<<endl;
            }
        }
        else{//username != "Admin"
            if(password != "Admin120"){
                cout<< "Username and password not correct"<<endl;
            }
            else{
                cout<< "Username not correct"<<endl;
            }
        }
 }