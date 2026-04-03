class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    // for(int num : nums){
    //     if(seen.contains(num)){
    //         //std::cout << seen.count(num);
    //         return true;
    //     }
    //       seen.insert(num);
        
    // }

    //now reserve the hash before 
    seen.reserve(nums.size());

    for(int n : nums){
        if(!seen.insert(n).second) return true;//if the insert fails and insert results in pair<iteraotr and boo> and to access it call first for iterator and second for bool result

    }

    return false;
    }
};