#include <iostream>

using namespace std;

bool passchecker(string password);

int main()
{
    string input;

    cout << "Please enter a password" << endl;
    cin >> input;

    if(passchecker(input) == true){
        cout << "Welcome back, you got mail!" << endl;
    }else{
        cout << "Error: Wrong password" << endl;
    }
    return 0;
}

bool passchecker(string password)
{
    string password0 = "awesome";
    string password1 = "sauce";

    if(password == password0 || password == password1){
        return true;
    }else{
        return false;
    }
}
