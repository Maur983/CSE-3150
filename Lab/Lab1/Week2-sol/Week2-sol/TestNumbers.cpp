#include "ECNumbers.h"
#include <iostream>
#include "ECCalculator.h"

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

  // print out 4 times of n by invoking ECCalculator's function
  cout << ECFourTimesN(n) << endl;

  return 0;
}
