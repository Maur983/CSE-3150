// To build: c++ .cpp -o test3
// To test: ./test3
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ECNumOccurrences.cpp"

int main()
{
  // Test basic cases
  //cout << "F(1) = " << ECNumOccurrences({1,3}, {1,1,2,3,6,7,10}) << " (expected: {2,1})" << endl;
  //cout << "F(2) = " << ECNumOccurrences({1,3,1}, {1,1,1,3,3,6,7}) << " (expected: {3,2,3})" << endl;
  const auto result = ECNumOccurrences({1,3}, {1,1,2,3,6,7,10});
  cout << "F(1) = {";
  for (size_t i = 0; i < result.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << result[i];
  }
  cout << "} (expected: {2,1})" << endl;
  
  const auto result2 = ECNumOccurrences({1,3,1}, {1,1,1,3,3,6,7});
  cout << "F(2) = {";
  for (size_t i = 0; i < result2.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << result2[i];
  }
  cout << "} (expected: {3,2,3})" << endl;

  return 0;
}