#include <iostream>

int main() {

    std::cout << "Enter the array size: ";
    int size;
    std::cin >> size;
    int array[size];

    std::cout << "Fill the contents of the array: " << std::endl;
    for (int i = 0; i < size; i++)
        std::cin >> array[i];

    std::cout << "Enter the value you want to delete from the array: "; 
    int valueToDelete;
    std::cin >> valueToDelete;

    bool foundAndDeleted = false;

    for (int i = 0; i < size; i++) {
        if (array[i] == valueToDelete) {

            for (int j = i; j < size; j++) {
                array[j] = array[j + 1];
            }
            std::cout << "Contents of array before deletion:" << std::endl;
            for (int i = 0; i < size; i++) {
                std::cout << array[i] << " ";
            }

            std::cout << "Contents of array after deletion:" << std::endl;
            for (int i = 0; i < size - 1; i++) {
                std::cout << array[i] << " ";
            }

            return 0;
        }
    }

    std::cout << "Value " << valueToDelete << " not found";
    
}
