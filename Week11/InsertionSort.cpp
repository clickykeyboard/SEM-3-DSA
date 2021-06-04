#include <iostream>
using namespace std;

void insertionSort(int array[], int numberOfItems) {
    for (int i = 1; i < numberOfItems; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

void displayItems(int array[], int numberOfItems) {
    for (int i = 0; i < numberOfItems; i++) {
        cout << array[i] << endl;
    }
}

main() {
    
    int numberOfItems = 5;
    int array[numberOfItems];
    for (int i = 0; i < numberOfItems; i++) {
        cin >> array[i];
    }

    cout << "--" << endl;

    insertionSort(array, numberOfItems);
    displayItems(array, numberOfItems);

}
