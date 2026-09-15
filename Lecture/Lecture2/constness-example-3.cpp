#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& vec) {

  for(int i=0; i < vec.size(); i++) {
    //vec[i] ++; due to the function it's declared as a const it cannot be changed in the function.
    cout << vec[i] << endl;
  }
}

int main() {
  vector<int> vec(3,10);
  printVector(vec);
  return 0;
}
