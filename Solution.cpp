#include "Solution.h"
#include <algorithm> 

string Solution::longestCommonPrefix(vector<string>& strs){
    string prefix{};
    size_t iter = 0;
    char current{};

    while (iter < strs[0].size()) {
        current = strs[0][iter];
        for (auto i : strs) {
            if (iter == i.size()) return prefix;
            if (current != i[iter]) return prefix;
        }
        prefix.push_back(current);
        iter++;
    }

    return prefix;
}
