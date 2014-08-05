#include <iostream>

using namespace std;

int main()
{
    bool veritas = false;
    int x;
    string password = "password";
    string input;

    do{
        for(x = 0; x < 3; x++){
            cout << "Please enter password" << endl;
            cin >> input;
            if(input == password){
                veritas = true;
            }
        }
        if(veritas == false){
            cout << "number of tries exceeded" << endl;
            break;
        }
    }while(veritas == false);

    if(veritas == true){
    cout << "Welcome Back!";
    }

    return 0;
}
