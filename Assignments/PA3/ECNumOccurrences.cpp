#include <vector>

std::vector<int> ECNumOccurrences(const std::vector<int> &queries,
                                  const std::vector<int> &sortedValues) {
    // TODO: Count each query efficiently using the sorted input vector.
    (void)queries;
    (void)sortedValues;
    std::vector<int> occ(queries.size());
    for(int i =0;i<queries.size();i++){
        occ[i] = 0;
        int num = queries[i];
        for(int j=0;j<sortedValues.size(); j++){
            if(sortedValues[j] ==num){
                occ[i]+=1;
            }
        }
    }
    if(occ.empty()==false)
        return occ;
    return {};
}
