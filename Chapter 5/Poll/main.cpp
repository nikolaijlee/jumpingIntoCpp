#include <iostream>

using namespace std;

int main()
{
    int input;
    int x = 0;
    int y = 0;
    int z = 0;
    bool exit = false;

    while(exit == false){
        cout << "Poll Question" << endl;
        cout << "1. x" << endl;
        cout << "2. y" << endl;
        cout << "3. z" << endl;

        cin >> input;
        if(input == 0){
            exit = true;
        }
        else if(input == 1){
            x++;
        }
        else if(input == 2){
            y++;
        }
        else if(input == 3){
            z++;
        }else{
            cout << "invalid value please enter another number" << endl;
        }
    }
    cout << "Poll Results: " << endl;
    //
    cout << "x votes: " << x << " percentage: " << x * 100 / (x + y + z) <<"%" << endl;
    //
    cout << "y votes: " << y << " percentage: " << y * 100 / (x + y + z) <<"%" << endl;
    //
    cout << "z votes: " << z << " percentage: " << z * 100 / (x + y + z) <<"%" << endl;
    //

    return 0;
}
