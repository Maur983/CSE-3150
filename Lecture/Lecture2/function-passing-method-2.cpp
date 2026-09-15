#include <iostream>
#include <vector>

void processVectorByReference(std::vector<int>& myVector) {
    // Modifications here will affect the original vector
    myVector.push_back(100); 
    for (int val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> originalVector = {1, 2, 3};
    std::cout << "Original vector before call: ";
    for (int val : originalVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    processVectorByReference(originalVector);

    std::cout << "Original vector after call: ";
    for (int val : originalVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}
