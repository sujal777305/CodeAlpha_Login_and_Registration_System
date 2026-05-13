#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

void registration(string username, string password) {

}

// void login() {

// }

int main() {
    cout<<"Welcome message\n\n";
    string username, password;
    int ch;
    do {
        cout<<"\nSelect operation\n1. Registration\n2. Login\n0. Exit\n";
        cin>>ch;

        switch(ch) {
            case 1:
                cout<<"Enter username : ";
                cin>>username;
            
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout<<"Enter password : ";
                geline(cin, password);

                registration(username, password);
                break;
            case 2:
                // login();
                break;
            case 0:
                cout<<"Exit\n";
                break;
            default:
                cout<<"Please select valid choice\n";
        }
    }while(ch!=0);
    
    return 0;
}