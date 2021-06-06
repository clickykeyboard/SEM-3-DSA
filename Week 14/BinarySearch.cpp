#include <iostream>
#define ARRAY_SIZE 8
using namespace std;

bool binarySearch(int array[], int sizeOfArray, int numberToSearch) {
    int startPoint = 0;    
    int midPoint;
    int endPoint = ARRAY_SIZE - 1;

    while (startPoint <= endPoint) {
        midPoint = (startPoint + endPoint) / 2;

        if (numberToSearch == array[midPoint]) {
            return true;
        }

        if (numberToSearch > array[midPoint]) {
            startPoint = midPoint + 1;
        }
        
        if (numberToSearch < array[midPoint]) {
            endPoint = midPoint - 1;
        }
    }

    return false;
}

main() {
    int array[ARRAY_SIZE] = { 31, 36, 48, 50, 74, 92, 100, 230 };
    int numberToSearch;
    cout << "Enter the number to search" << endl;
    cin >> numberToSearch;

    cout << binarySearch(array, ARRAY_SIZE, numberToSearch);
}

