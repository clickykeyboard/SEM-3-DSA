#include <iostream>

int main() {

    std::cout << "Enter the array length" << std::endl;

    int size;
    std::cin >> size;

    int array[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a value at index " << i << std::endl;
        std::cin >> array[i];
    }

    std::cout << "Array contents:" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cout << i << ": " << array[i] << std::endl;
    }

}
