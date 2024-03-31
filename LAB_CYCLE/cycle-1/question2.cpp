#include <iostream>
#include "Array.cpp"

int main() {
    const int size = 10;
    Array<int> arr(size); // Creating an array object of integers

    // Fill the array with predefined values
    int values[size] = {5, 3, 8, 2, 1, 9, 7, 4, 6, 0};
    for (int i = 0; i < size; ++i) {
        arr[i] = values[i];
    }

    std::cout << "Array before sorting:" << std::endl;
    arr.display();

    // Sorting the array using different sorting algorithms
    std::cout << "\nSorting the array using Quick Sort:" << std::endl;
    arr.quickSort();

    std::cout << "\nArray after sorting:" << std::endl;
    arr.display();

    // Searching for elements in the array
    int elementToSearch = 7;
    std::cout << "\nSearching for element " << elementToSearch << " using Binary Search:" << std::endl;
    arr.binarySearch(elementToSearch);

    elementToSearch = 10;
    std::cout << "\nSearching for element " << elementToSearch << " using Linear Search:" << std::endl;
    arr.linearSearch(elementToSearch);

    return 0;
}
