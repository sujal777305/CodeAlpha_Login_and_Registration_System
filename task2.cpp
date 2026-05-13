#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

void registration(string username, string password) {
    bool found=false;
    string uname;

    ifstream obj("all_uname.txt");
    while(obj>>uname) {
        if(uname==username) {
            found=true;
            break;
            obj.close();
        }
    }
    if(found) {
        cout<<"This username is already exist...\n";
    } else {

        ofstream ob("all_uname.txt", ios::app);
        ob<<username<<endl;
        ob.close();

        string file = username + ".txt";
        ofstream fout(file);

        fout<<username<<endl;
        fout<<password;

        fout.close();
        cout<<"\nYou are successfully registered..!!!\n";
    }
}

// void login() {

// }

int main() {
    cout<<"Welcome message\n\n";
    string username, password;
    int ch;
    do {
        cout<<"\nSelect operation\n1. Registration\n2. Login\n0. Exit\n";
        cout<<"Enter your choice : ";
        cin>>ch;

        switch(ch) {
            case 1:
                cout<<"Enter username : ";
                cin>>username;
            
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout<<"Enter password : ";
                getline(cin, password);

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