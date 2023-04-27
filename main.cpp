#include <iostream>
#include "search.hpp"

void printresult(int key, int index) {
    if (index > -1) {
        std::cout << "Found key " << key
                  << " at index " << index
                  << std::endl;
    } else {
        std::cout << "No results found"
                  << std::endl;
    }
}

void test_binarysearch() {
    int array[5]{2,4,6,8,10};
    int key = 8, result;

    std::cout << "Binary Search: ";
    result = binarysearch(array,5,key);
    printresult(key,result);

    std::cout << "Binary Search (recursive): ";
    result = rbinarysearch(array,0,5,key);
    printresult(key,result);
}

int main() {
    test_binarysearch();
    return 0;
}
