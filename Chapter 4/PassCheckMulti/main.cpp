#include <iostream>

using namespace std;

int main()
{
    int pass1 = 123;
    int pass2 = 321;
    int input;

    cout << "Please enter a password" << endl;
    cin >> input;

    if(input == pass1 || input == pass2){
        cout << "Welcome back, you got mail!" << endl;
    }else{
        cout << "Error: Wrong password" << endl;
    }
    return 0;
}
