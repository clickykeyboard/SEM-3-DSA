#include <iostream>

int main() {

    std::cout << "Enter the size of your array" << std::endl;

    int size;
    std::cin >> size;

    int array[size + 1];

    std::cout << "Enter the contents of the array" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    int position;
    std::cout << "Enter the index position to insert in the array" << std::endl;
    std::cin >> position;

    while (position < 0 || position >= size) {
        std::cout << "Please enter a position between 0 and " << size + 1 << std::endl;
        std::cin >> position;
    }

    int value;
    std::cout << "Enter the value you want to insert" << std::endl;
    std::cin >> value;

    std::cout << "Contents before insertion: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    array[position] = value;

    std::cout << "Contents after insertion: " << std::endl;
    for (int i = 0; i < size + 1; i++) {
        std::cout << array[i] << " ";
    }

}

