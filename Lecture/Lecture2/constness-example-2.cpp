#include <iostream>
using namespace std;

int main() {

  cout << "Please enter your first name:";
  string name;
  cin >> name;

  const string greet = "Hello " + name + " !";
  const int width = greet.size();
  //width ++; Thr width can't be changed because it is declared as a const variable.
  const string star(width+4, '*');
  const string row2 = "* " + string(width,' ') + " *";
  cout << star << endl << row2 << endl << "* " + greet
    + " *" << endl << row2 << endl << star << endl;

  return 0;
}
