// Starter code
#include <string>
#include <iostream>

std::string ECSwapCase(std::string str)
{
    for(auto &a : str){
        if(a >= 'a' && a <= 'z'){
            a += 'A' - 'a';
        } else if (a >= 'A' && a <= 'Z'){
            a += 'a' - 'A';
        }
    } 
    return str;
}


