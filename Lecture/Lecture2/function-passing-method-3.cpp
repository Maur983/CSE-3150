#include <iostream>
#include <vector>

void printVector(const std::vector<int>& myVector) {
    // Cannot modify myVector here
    for (int val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {10, 20, 30};
    printVector(data);
    return 0;
}
