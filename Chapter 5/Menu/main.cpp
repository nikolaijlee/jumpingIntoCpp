#include <iostream>

using namespace std;

int main()
{
    bool input = false;
    string choice1 = "xxxx";
    string choice2 = "yyyy";
    string choice3 = "zzzz";
    string inputChoice;

    while(input == false){
        cout << "Menu" << endl;
        cout << "1. xxxx" << endl;
        cout << "2. yyyy" << endl;
        cout << "3. zzzz" << endl;
        cin >> inputChoice;
        if(inputChoice == choice1
        || inputChoice == choice2
        || inputChoice == choice3){
            input = true;
        }
    }
    return 0;
}
