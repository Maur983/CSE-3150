// Test code for computeFibonacci
// To build: c++ .cpp -o test2
// To test: ./test2
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ECValidSudoku.cpp"

int main()
{
  // Test basic cases
  vector<vector<string>> valid_board = {{"5", "3", ".", ".", "7", ".", ".", ".", "."},{"6", ".", ".", "1", "9", "5", ".", ".", "."},{".", "9", "8", ".", ".", ".", ".", "6", "."},{"8", ".", ".", ".", "6", ".", ".", ".", "3"},{"4", ".", ".", "8", ".", "3", ".", ".", "1"},{"7", ".", ".", ".", "2", ".", ".", ".", "6"},{".", "6", ".", ".", ".", ".", "2", "8", "."},{".", ".", ".", "4", "1", "9", ".", ".", "5"},{".", ".", ".", ".", "8", ".", ".", "7", "9"}};
  cout << "F(true) = " << ECValidSudoku(valid_board) << " (expected: true)" << endl;
  return 0;
}