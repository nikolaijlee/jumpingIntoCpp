#include <iostream>

using namespace std;

void lineOne(int dayNum);

int main()
{
    for(int x = 1; x <= 12; x++)
    {
        lineOne(x);
        switch(x)
        {
            case 12: cout << "Twelve Drummers Drumming" << endl;
            case 11: cout << "Eleven Pipers Piping" << endl;
            case 10: cout << "Ten Lords-a-Leaping," << endl;
            case 9: cout << "Nine Ladies Dancing" << endl;
            case 8: cout << "Eight Maids-a-Milking," << endl;
            case 7: cout << "Seven Swans-a-Swimming," << endl;
            case 6: cout << "Six Geese-a-Laying," << endl;
            case 5: cout << "Five Gold Rings," << endl;
            case 4: cout << "Four Calling Birds," << endl;
            case 3: cout << "Three French Hens," << endl;
            case 2: cout << "Two Turtle Doves" << endl
                         << "and a Partridge in a Pear Tree." << endl;
            break;
            case 1: cout << "a Partridge in a Pear Tree." << endl;
            break;
            default: cout << "The grinch stole everything" << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}

void lineOne(int dayNum)
{
    string dayWord;

    switch(dayNum)
    {
        case 1: dayWord = "first";
        break;
        case 2: dayWord = "second";
        break;
        case 3: dayWord = "third";
        break;
        case 4: dayWord = "fourth";
        break;
        case 5: dayWord = "fifth";
        break;
        case 6: dayWord = "sixth";
        break;
        case 7: dayWord = "seventh";
        break;
        case 8: dayWord = "eigth";
        break;
        case 9: dayWord = "nineth";
        break;
        case 10: dayWord = "tenth";
        break;
        case 11: dayWord = "eleventh";
        break;
        case 12: dayWord = "twelfth";
        break;
        default: dayWord = "what day is it?";
        break;
    }

    cout << "On the " << dayWord <<" of Christmas my true love gave to me" << endl;
}


