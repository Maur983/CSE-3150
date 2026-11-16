#include <string>

bool ECBalancedDelimiters(const std::string &text){
    // TODO: Check (), [], and {} while ignoring all other characters.
    (void)text;
    std :: string open = "";
    if (text.empty()){
        return true;
    }
    for (char c : text){
        if (c=='(' || c=='{'|| c=='['){
            open.push_back(c);
        }
        else if (c==')' || c=='}'|| c==']'){
            if (open.empty()){
                return false;
            }
            if (c==')' && open.back() != '('){
                return false;
            }
            if (c==']' && open.back() != '['){
                return false;
            }
            if (c=='}' && open.back() != '{'){
                return false;
            }
            open.pop_back();
        }
    }
    if(open.empty()){
        return true;
    }
    return false;
}
