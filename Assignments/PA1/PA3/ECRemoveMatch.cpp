#include <string>
#include <vector>

void ECRemoveMatch(std::vector<std::string *> &pointers,
                   const std::string *target) {
    // TODO: Remove every pointer whose address equals target.
    (void)pointers;
    (void)target;
    size_t curr = 0;
    for(size_t i = 0; i < pointers.size(); ++i){
        if(pointers[i] != target){
            pointers[curr] = pointers[i];
            curr+=1;
        }
    }
    pointers.resize(curr);
}
