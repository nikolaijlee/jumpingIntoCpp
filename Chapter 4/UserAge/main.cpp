#include <iostream>

using namespace std;

int main()
{
    int ageUser1;
    int ageUser2;
    int const oldAge = 100;

    cout << "Hello, Please enter the age of the first user" << endl;
    cin >> ageUser1;

    cout << "Please enter the age of the second user" << endl;
    cin >> ageUser2;

    if(ageUser1 > oldAge && ageUser2 > oldAge){
        cout << "Wow! I smell old people" << endl;
    } else {
        cout << "The combined age of both users equals: " << ageUser1 + ageUser2;
    }
    return 0;
}
