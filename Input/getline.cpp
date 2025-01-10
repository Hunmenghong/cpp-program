#include <iostream>

using namespace std;

int main(){
    string word,word1;

    cout<< "Enter word : ";
    getline(cin,word);
    cout<< "Enter word-1 : ";
    cin>>word1;
    cout<< "This word-1 using cin : "<<word1<<endl;
    cout<< "This word using getline : "<<word;
}