#include <iostream>
#include <limits>
using namespace std;

int main() {
    int value;
    bool validInput = false;

    while (!validInput) {
        cout << "Enter an integer between 5 and 10: ";

        if (cin >> value) {
            if (value >= 5 && value <= 10) {
                validInput = true;
            } else {
                cout << "Invalid input. Enter an integer between 5 and 10.\n";
            }
        } else {
            cout << "Invalid input. Enter an integer between 5 and 10.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Your input value("<< value << ") has been accepted.\n";
    return 0;
}