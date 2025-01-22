#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int id[50];
    string name[50];
    char sex[50];
    float gpa[50];
    int deleteid,search;
    int n = 0;
    int opt,find = 0;


    cout <<endl<< "Student Management System" << endl;
    cout << "----------------------------------------" << endl;

    do {
        cout<<endl;
        cout << "  1. Insert Student" << endl;
        cout << "  2. View Students" << endl;
        cout << "  3. Update Student" << endl;
        cout << "  4. Delete Student" << endl;
        cout << "  5. Search Student" <<endl;
        cout << "  6. Exit" << endl;
        cout << "Enter Option[1-6]: ";
        cin >> opt;

        switch (opt) {
        case 1:
            
                cout << "Enter Id   : ";
                cin >> id[n];
                cout << "Enter Name : ";
                cin >> name[n];
                cout << "Enter Sex[M/F]  : ";
                cin >> sex[n];
                cout << "Enter Gpa  : ";
                cin >> gpa[n];
                n++;
            
            break;
        case 2:
            cout<<endl<< "----------------------------------"<<endl;
            for (int i = 0; i < n; i++) {
            
                cout<<left;
                cout<<setw(5)<<id[i];
                cout<<setw(30)<<name[i];
                cout<<setw(5)<<sex[i];
                cout<<setw(10)<<gpa[i]<<endl;
            }
            break;
        case 3:
            find = 0;
            cout <<endl<< "Enter the Id of the student to update: ";
            cin >> search;
            for (int i = 0; i < n; i++) {
                if (id[i] == search) {
                    cout << "Enter new Name : ";
                    cin >> name[i];
                    cout << "Enter new Sex[M/F]  : ";
                    cin >> sex[i];
                    cout << "Enter new Gpa  : ";
                    cin >> gpa[i];
                    cout << "Student updated." << endl;
                    find = 1;
                }
            }
            if(find == 0){

                cout<< "Student not found!!"<<endl;
            }
            break;
        case 4:
            cout <<endl<< "Enter the Id of the student to delete: ";
            cin >> deleteid;
            for (int i = 0; i < n; i++) {
                if (id[i] == deleteid) {
                    for (int j = i; j < n - 1; j++) {
                        id[j] = id[j + 1];
                        name[j] = name[j + 1]; 
                        sex[j] = sex[j + 1];
                        gpa[j] = gpa[j + 1];
                    }
                    n--;
                    cout << "Student deleted." << endl;
                    find = 1;
                }
            }
            if(find == 0){

                cout<< "Student not found!!"<<endl;
            }
            break;
        case 5:
            cout <<endl<< "Enter the Id of the student to search: ";
            cin >> search;
            for (int i = 0; i < n; i++) {
                if (id[i] == search) {
                    cout<<left;
                    cout<<setw(5)<<id[i];
                    cout<<setw(30)<<name[i];
                    cout<<setw(5)<<sex[i];
                    cout<<setw(10)<<gpa[i]<<endl;
                    find = 1;
                }
                
            }
            if(find == 0){
                cout<< "Student not found!!"<<endl;
            }
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    } while (opt != 6);

    return 0;
}
