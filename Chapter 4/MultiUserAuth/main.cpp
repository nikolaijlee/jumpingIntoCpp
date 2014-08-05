#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user;
    string password;

    cout << "Username: " << endl;
    getline(cin, user, '\n');

    if(user == "nick"){
        string realPassword = "1";

        cout << "Password: " << endl;
        getline(cin, password, '\n');

        if(password == realPassword){
            cout << "Welcome back Nick!" << endl;
        }else{
            cout << "Error: Wrong Password." << endl;
        }
    }
    else if(user == "mike"){
        string realPassword = "12";

        cout << "Password: " << endl;
        getline(cin, password, '\n');

        if(password == realPassword){
            cout << "Welcome back Mike!" << endl;
        }else{
            cout << "Error: Wrong Password." << endl;
        }
    }
    else if(user == "morgan"){
        string realPassword = "123";

        cout << "Password: " << endl;
        getline(cin, password, '\n');

        if(password == realPassword){
            cout << "Welcome back Morgan!" << endl;
        }else{
            cout << "Error: Wrong Password." << endl;
        }
    }else{
        cout << "Error: user not found." << endl;
    }

    return 0;
}
