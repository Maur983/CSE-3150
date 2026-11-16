#include <string>

bool ECIsIsomorphic(const std::string &s, const std::string &t) {
    // TODO: Return whether a one-to-one character mapping transforms s into t.
    (void)s;
    (void)t;
    int s1[s.length()];
    int s2[t.length()];
    if (s.empty() && t.empty()){
        return true;
    }
    if (s.length() != t.length()){
        return false;
    }
    else{
        int last_s[256] = {0};
        int last_t[256] = {0};
        for (int i=0; i<s.length(); i++){
            unsigned char c1 = s[i];
            unsigned char c2 = t[i];
            s1[i] = last_s[c1];
            s2[i] = last_t[c2];
            if (s1[i] != s2[i]){
                return false;
            }
            last_s[c1] = i+1;
            last_t[c2] = i+1;
        }
        return true;
    }
    return false;
}
