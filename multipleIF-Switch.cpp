// multiple if statements can be replaced with switch statement
#include <iostream>
using namespace std;
// Receive a number from the user to output the day of a week
int main()
{
    int numberWeek;

    //take input
    cout << "\n What day of the week you want (enter between 1 and 7)? \t";
    cin >> numberWeek;

    //checking the number
    /*
    if (numberWeek == 1) {
        cout << "\n It is Monday \t";
     } else if (numberWeek == 2) {
         cout << "\n It is Tuesday \t";
     } else if (numberWeek == 3) {
        cout << "\n It is Wednesday \t";
    } else if (numberWeek == 4) {
        cout << "\n It is Thursday \t";
    } else if (numberWeek == 5) {
        cout << "\n It is Friday \t";
    } else if (numberWeek == 6) {
        cout << "\n It is Saturday \t";
    } else if (numberWeek == 7) {
        cout << "\n It is Sunday \t";
    } else {
        cout << "\n Sorry! Enter a number between 1 and 7 \t";
    }*/


    //using switch for the above

    switch (numberWeek) {
    case 1:
        cout << "\n It is Monday \t";
        break;
    case 2:
        cout << "\n It is Tuesday \t";
        break;
    case 3:
        cout << "\n It is Wednesday \t";
        break;
    case 4:
        cout << "\n It is Thursday \t";
        break;
    case 5:
        cout << "\n It is Friday \t";
        break;
    case 6:
        cout << "\n It is Saturday \t";
        break;
    case 7:
        cout << "\n It is Sunday \t";
        break;           
    default:
        cout << "\n Sorry! Enter a number between 1 and 7 \t";
    }


    return 0;
}