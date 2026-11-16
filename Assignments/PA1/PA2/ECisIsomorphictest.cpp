// Test code for computeFibonacci
// To build: c++ ECisIsomorphictest.cpp -o test
// To test: ./test
#include <iostream>
using namespace std;

#include "ECisIsomorphic.cpp"

int main()
{
  // Test basic cases
  cout << "F(empty) = " << (ECIsIsomorphic("", "") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(length) = " << (ECIsIsomorphic("add", "hammer") ? "true" : "false") << " (expected: false)" << endl;
  cout << "F(true1) = " << (ECIsIsomorphic("add", "egg") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(false1) = " << (ECIsIsomorphic("foo", "bar") ? "true" : "false") << " (expected: false)" << endl;
  cout << "F(true2) = " << (ECIsIsomorphic("paper", "title") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(false2) = " << (ECIsIsomorphic("aa", "ab") ? "true" : "false") << " (expected: false)" << endl;

  return 0;
}