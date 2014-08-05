#include <iostream>

using namespace std;

void bottles();
void calcutator();

int main()
{
    bool input = false;
    int inputChoice;

    while(input == false){
        cout << "Menu" << endl;
        cout << "1. sing" << endl;
        cout << "2. calc" << endl;
        cout << "3. escape" << endl;
        cin >> inputChoice;
        switch(inputChoice)
        {
            case 1:
            bottles();
            break;

            case 2:
            calcutator();
            break;

            case 3:
            input = true;
            break;

            default:
            cout << "Invalid entry, try again";
            break;
        }
    }
    return 0;
}

void bottles(){
    int x;
    for(x = 99; x > 0; x--){
        cout << x << " bottles of beer on the wall, " << x << " bottles of beer." << "\n";
        cout << "take one down and pass it around " << x - 1 << " bottles of beer on the wall." << "\n";
    }
}

void calcutator(){
    double arg1;
    double arg2;
    double answer = 0;
    char operation;

    cout << "Welcome to NickCalc  please enter your first arguement: " << endl;
    cin >> arg1;

    cout << "Please enter the operation you would like to use: "<< endl
    << " 1. +" << endl
    << " 2. -" << endl
    << " 3. *" << endl
    << " 4. /" << endl;
    cin >> operation;

    cout << "Please enter your second arguement: " << endl;
    cin >> arg2;

    if(operation == '+'){
        answer = arg1 + arg2;
    }
    else if(operation == '-'){
        answer = arg1 - arg2;
    }
    else if(operation == '*'){
        answer = arg1 * arg2;
    }
    else if(operation == '/' && arg2 != 0){
        answer = arg1 / arg2;
    }else{
        cout << "Invalid operation cannot divide by 0" << endl;
    }

    cout << "The answer is: " << answer << endl;
}
