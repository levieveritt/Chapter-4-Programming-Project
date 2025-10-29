#include <iostream>
#include <string>

using namespace std;


int main() {
    int year, month;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month (1-12): ";
    cin >> month;

    // Validate month input
    if (month < 1 || month > 12) {
        cout << "Invalid month. Month should be between 1 and 12." << endl;
        return 1; // Indicate an error
    }

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int daysInMonth;

    if (month == 2) {
        daysInMonth = isLeapYear ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    cout << "Number of days in " << month << "/" << year << ": " << daysInMonth << endl;

    return 0;
}