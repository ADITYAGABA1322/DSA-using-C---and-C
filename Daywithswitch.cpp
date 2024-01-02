
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Declare Variables
//     int month;
//     int day;
//     int year;
//     char backSlash;

//     // Collect Data
//     cout << "Enter today's date: ";
//     cin >> month >> backSlash >> day >> backSlash >> year;

//     // Check month
//     switch (month)
//     {
//     case 1:
//     {
//         cout << "January ";
//         break;
//     }
//     case 2:
//     {
//         cout << "February ";
//         break;
//     }
//     case 3:
//     {
//         cout << "March ";
//         break;
//     }
//     case 4:
//     {
//         cout << "April ";
//         break;
//     }
//     case 5:
//     {
//         cout << "May ";
//         break;
//     }
//     case 6:
//     {
//         cout << "June ";
//         break;
//     }
//     case 7:
//     {
//         cout << "July ";
//         break;
//     }
//     case 8:
//     {
//         cout << "August ";
//         break;
//     }
//     case 9:
//     {
//         cout << "September ";
//         break;
//     }
//     case 10:
//     {
//         cout << "October ";
//         break;
//     }
//     case 11:
//     {
//         cout << "November ";
//         break;
//     }
//     case 12:
//     {
//         cout << "December ";
//         break;
//     }
//     default:
//     {
//         cout << month << " is not a valid month";
//         exit(1);
//     }
//     }

//     // Check Day
//     switch (day)
//     {
//     case 1:
//     case 21:
//     case 31:
//     {
//         cout << day << "st, ";
//         break;
//     }
//     case 2:
//     case 22:
//     {
//         cout << day << "nd, ";
//         break;
//     }
//     case 3:
//     case 23:
//     {
//         cout << day << "rd, ";
//         break;
//     }
//     default:
//     {
//         cout << day << "th, ";
//         break;
//     }
//     }

//     // Display Year
//     cout << year << endl;

//     // Terminate
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int month;
//     int day;
//     int year;
//     char backSlash;

//     cout << "Enter today's date: ";
//     cin >> month >> backSlash >> day >> backSlash >> year;
//     switch (month)
//     {
//     case 1:
//     {
//         cout << "January ";
//         break;
//     }
//     case 2:
//     {
//         cout << "February ";
//         break;
//     }
//     case 3:
//     {
//         cout << "March ";
//         break;
//     }
//     case 4:
//     {
//         cout << "April ";
//         break;
//     }
//     case 5:
//     {
//         cout << "May ";
//         break;
//     }
//     case 6:
//     {
//         cout << "June ";
//         break;
//     }
//     case 7:
//     {
//         cout << "July ";
//         break;
//     }
//     case 8:
//     {
//         cout << "August ";
//         break;
//     }
//     case 9:
//     {
//         cout << "September ";
//         break;
//     }
//     case 10:
//     {
//         cout << "October ";
//         break;
//     }
//     case 11:
//     {
//         cout << "November ";
//         break;
//     }
//     case 12:
//     {
//         cout << "December ";
//         break;
//     }
//     default:
//     {
//         cout << month << " is not a valid month";
//         exit(1);
//     }
//     }

//     switch (day)
//     {
//     case 1:
//     case 21:
//     case 31:
//     {
//         cout << day << "st, ";
//         break;
//     }
//     case 2:
//     case 22:
//     {
//         cout << day << "nd, ";
//         break;
//     }
//     case 3:
//     case 23:
//     {
//         cout << day << "rd, ";
//         break;
//     }
//     default:
//     {
//         cout << day << "th, ";
//         break;
//     }
//     }

//     cout << year << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int month;
    int day;
    int year;
    char backSlah;
    cout << "Enter today's date: ";
    cin >> month >> backSlah >> day >> backSlah >> year;

    switch (month)
    {
    case 1:
    {
        cout << "January ";
        break;
    }
    case 2:
    {
        cout << "February ";
        break;
    }
    case 3:
    {
        cout << "March ";
        break;
    }
    case 4:
    {
        cout << "April ";
        break;
    }
    case 5:
    {
        cout << "May ";
        break;
    }
    case 6:
    {
        cout << "June ";
        break;
    }
    case 7:
    {
        cout << "July ";
        break;
    }
    case 8:
    {
        cout << "August ";
        break;
    }
    case 9:
    {
        cout << "September ";
        break;
    }
    case 10:
    {
        cout << "October ";
        break;
    }
    case 11:
    {
        cout << "November ";
        break;
    }
    case 12:
    {
        cout << "December ";
        break;
    }
    default:
    {
        cout << month << " is not a valid month";
        exit(1);
    }
    }
    switch (day)
    {
    case 1:
    case 21:
    case 31:
    {
        cout << day << "st, ";
        break;
    }
    case 2:
    case 22:
    {
        cout << day << "rd, ";
        break;
    }
    case 3:
    case 23:
    {
        cout << day << "rd, ";
        break;
    }
    default:
    {
        cout << day << "th, ";
    }
    }
    cout << year << endl;
    return 0;
}