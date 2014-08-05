#include <iostream>
#include <string>

using namespace std;

int main()
{
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

    return 0;
}
