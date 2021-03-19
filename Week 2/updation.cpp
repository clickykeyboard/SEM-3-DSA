#include <iostream>

using namespace std;

main() {

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arrayLength = 9;

    cout << "Enter the number to update: ";
    int numberToUpdate;
    cin >> numberToUpdate;

    int position = -1;

    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == numberToUpdate) {
            cout << "Your value exists in the array.\nEnter a new value: ";
            position = i;
            break;
        }
    }

    if (position >= 0) {
        int newValue;
        cin >> newValue;
        array[position] = newValue;

        cout << "Your array has been updated.";
        for (int i = 0; i < arrayLength; i++) {
            cout << array[i] << endl;
        }
    } else {
        cout << "Your number was not found in the array";
    }
}
