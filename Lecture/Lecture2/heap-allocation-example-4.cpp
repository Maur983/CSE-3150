#include <iostream>

int main() {

  using namespace std;
  int* px = new int[10];

  for(int* cx = px;cx < px+10;cx++)
    *cx = cx - px;

  for(int i=0;i<10;i++)
    cout << "px[" << i << "]= " << px[i] << endl;

  cout << "px = " << px << endl;
  delete[] px;
  return 0;
}
