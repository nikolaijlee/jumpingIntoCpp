#include <iostream>
#include <string>

using namespace std;

double addition(double arg1, double arg2);
double subtraction(double arg1, double arg2);
double multiplication(double arg1, double arg2);
double division(double arg1, double arg2);

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
        cout << "The answer is: " << addition(arg1, arg2) << endl;
    }
    else if(operation == '-'){
        cout << "The answer is: " << subtraction(arg1, arg2) << endl;
    }
    else if(operation == '*'){
        cout << "The answer is: " << multiplication(arg1, arg2) << endl;
    }
    else if(operation == '/' && arg2 != 0){
        cout << "The answer is: " << division(arg1, arg2) << endl;
    }else{
        cout << "Invalid operation cannot divide by 0" << endl;
    }

    return 0;
}

double addition(double arg1, double arg2){
    return arg1 + arg2;
}

double subtraction(double arg1, double arg2){
    return arg1 - arg2;
}

double multiplication(double arg1, double arg2){
    return arg1 * arg2;
}

double division(double arg1, double arg2){
    return arg1 / arg2;
}

