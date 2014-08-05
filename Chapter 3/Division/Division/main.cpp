#include <iostream>

using namespace std;

int main()
{
    int numOne;
    int numTwo;

    double decOne;
    double decTwo;

    cout << "Please enter a number: " << endl;
    cin >> numOne;
    cout << "Please enter another number: " << endl;
    cin >> numTwo;
    cout << numOne << " / " << numTwo << " = " << numOne / numTwo << endl;

    cout << "Please enter a number: " << endl;
    cin >> decOne;
    cout << "Please enter another number: " << endl;
    cin >> decTwo;
    cout << decOne << " / " << decTwo << " = " << decOne / decTwo << endl;

    return 0;
}
