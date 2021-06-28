#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

main() {

    int array[] = { 1, 6, 2, 4, 7, 10, 8 };
    int size = 7;

    for (int i = 0; i < size - 1; i++) {
        int minimum = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minimum]) {
                minimum = j;
            }
        }

        if (minimum != array[i]) {
            int temp = array[i];
            array[i] = array[minimum];
            array[minimum] = temp;
        }
    }

    printArray(array, size);

}
