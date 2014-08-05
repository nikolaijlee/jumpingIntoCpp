#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    double input;

    do{
    cout << "Please enter an integer" << endl;
    cin >> input;
    sum += input;
    cout << "Sum Total: " << sum << endl;
    }while(input != 0);

    return 0;
}
