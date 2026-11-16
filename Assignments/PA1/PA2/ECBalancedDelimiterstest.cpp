#include <iostream>
#include "ECBalancedDelimiters.cpp"
using namespace std;

int main()
{
  // Test basic cases
  cout << "F(empty) = " << (ECBalancedDelimiters("") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(None) = " << (ECBalancedDelimiters("add") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(ex1) = " << (ECBalancedDelimiters("a{b[c(d)e]f}g") ? "true" : "false") << " (expected: true)" << endl;
  cout << "F(ex2) = " << (ECBalancedDelimiters("([)]") ? "true" : "false") << " (expected: false)" << endl;
  cout << "F(ex3) = " << (ECBalancedDelimiters("}") ? "true" : "false") << " (expected: false)" << endl;
  cout << "F(e4) = "  << (ECBalancedDelimiters("closing } first") ? "true" : "false") << " (expected: false)" << endl;
  cout << "F(e5) = "  << (ECBalancedDelimiters("({asas[ess]asas}aa)") ? "true" : "false") << " (expected: true)" << endl;

  return 0;
}
