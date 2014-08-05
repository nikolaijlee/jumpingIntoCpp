#include <iostream>

using namespace std;

int main()
{
    int x;

    for(x = 99; x > 0; x--){
        cout << x << " bottles of beer on the wall, " << x << " bottles of beer." << "\n";
        cout << "take one down and pass it around " << x - 1 << " bottles of beer on the wall." << "\n";
    }
    return 0;
}
