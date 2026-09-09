#include <iostream>
using namespace std;

int main() {

  int integerValue = 10;
  double doubleValue = 5.5;

  // most compliers will still allow this implict conversion
  int anotherIntValue = doubleValue;

  // recommended for safe type changes
  int convertedIntValue = static_cast<int>(doubleValue);
  cout << "Converted double to int: " << convertedIntValue << endl;

  return 0;

}
