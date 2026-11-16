#include <vector>
#include <unordered_set>

int ECLongestConsecutive(const std::vector<int> &nums) {
    // TODO: Return the length of the longest consecutive-value sequence.
    (void)nums;
    int longest = 0;
    std:: unordered_set<long long> values(nums.begin(), nums.end());
    for (long long i : values){
        if (values.find(i-1)== values.end()){
            long long curr = i;
            int length=1;
        
            while (values.find(curr+1) != values.end()){
                length+=1;
                curr+=1;
            }
            if (length>longest){
                longest = length;
            }
        }
    }
    if(longest!=0){
        return longest;
    }
    return 0;
}
