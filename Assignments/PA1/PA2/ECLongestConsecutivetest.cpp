// Test code for computeFibonacci
// To build: c++ .cpp -o test
// To test: ./test
#include <iostream>
using namespace std;

#include "ECLongestConsecutive.cpp"

int main()
{
  // Test basic cases
  cout << "F(0) = " << ECLongestConsecutive({}) << " (expected: 0)" << endl;
  cout << "F(2) = " << ECLongestConsecutive({100,3,8,21,2}) << " (expected: 2)" << endl;
  cout << "F(3) = " << ECLongestConsecutive({1,0,1,2}) << " (expected: 3)" << endl;
  cout << "F(4) = " << ECLongestConsecutive({100,4,200,1,3,2}) << " (expected: 4)" << endl;
  cout << "F(-) = " << ECLongestConsecutive({100,2,-1,0,1}) << " (expected: 4)" << endl;



  return 0;
}