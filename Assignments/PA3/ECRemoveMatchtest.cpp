// To build: c++ .cpp -o test1
// To test: ./test1
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ECRemoveMatch.cpp"

int main()
{
  // Test basic cases
  string s1 = "A";
  string s2 = "A";
  string s3 = "A";
  string *p1 = &s1;
  string *p2 = &s2;
  string *p3 = p1;
  string *p4 = &s3;
  vector<string*> v1 = {p1,p2,p3};
  vector<string*> v2 = {p1,p2,p4};
  ECRemoveMatch(v1, p1);
  ECRemoveMatch(v2, p1);
  cout << "F(1) = " << v1.size() << " (expected: 1)" << endl;
  cout << "F(2) = " << v2.size() << " (expected: 2)" << endl;


  return 0;
}