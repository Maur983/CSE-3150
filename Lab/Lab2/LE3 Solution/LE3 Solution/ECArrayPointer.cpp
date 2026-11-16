//
#include <iostream>
using namespace std;

int main()
{
  // allocate an array of char in heap 
  char *px = new char[10];
  // set this array to 'a', 'b' and so on
  // your code here...
  
  //index-based assignment
  // char var = 'a';
  // for(int i=0; i!=10; i++){
  //    px[i] = var++;
  // }

 //pointer-based assignment
  char var = 'a';
  for(int i=0; i<10; i++) {
    *(px+i) = var++;
  }

  // print out
  auto p = px;
  for(int i=0; i<10; ++i)
  {
    cout << *p;
    p++;
  }
  cout << endl;

  delete [] px;

  return 0;
}
 
