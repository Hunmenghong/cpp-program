#include <iostream>

using namespace std;

int main(){
     
     int number1 , number2 , minimum , maximum;
     char opt;
     cout <<"Find Minimum and Maximunm App"<<endl;
     cout <<"------------------------------"<<endl;
     cout <<"Enter value of number1  >";
     cin >>number1;
     cout <<"Enter value of number2  >";
     cin >>number2;

     cout <<"------------------------------"<<endl<<endl;

     cout <<"a.Minimum \t\t b.Maximum"<<endl;
     cout <<"Enter Your Chose[a,b]  :";
     cin >>opt;

     switch (opt)
     {
     case 'a':
        if (number1 > number2)
        {
            minimum = number2;
        }
        else{
            minimum = number1;
        }
        cout<<"Minimum = "<<minimum<<endl;
        break;

      case 'b':
         if (number1 > number2)
         {
            maximum = number1;
         }
         else{
            maximum = number2;
         }
         cout<<"Maximum ="<<maximum<<endl;
         break;
         
     default:
     cout<<"Opt mean tah a ng b tehhh kom jes tah dak";
        break;
     }






}