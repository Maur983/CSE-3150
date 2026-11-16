// Starter code
#include <iostream>

using namespace std;

string ECStringSep(const string &str)
{
  if(str.empty()) {
    return "";
  }
  string res;
  for(auto i: str){
        res += i;
        res += ',';
    } 
  res.pop_back();
  
  return res;
}

