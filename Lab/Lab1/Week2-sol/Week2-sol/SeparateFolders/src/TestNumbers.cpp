#include "ECNumbers.h"
#include <iostream>

using namespace std;

int main()
{
  // read in an integer n
  int n = 0;
  cout << "Input an integer: ";
  cin >> n;

  // print out the square of it
  cout << ECNumbers::ECSquareN(n) << endl;

  // print out 2n  
  cout << ECNumbers::ECDoubleN(n) << endl;

  return 0;
}
