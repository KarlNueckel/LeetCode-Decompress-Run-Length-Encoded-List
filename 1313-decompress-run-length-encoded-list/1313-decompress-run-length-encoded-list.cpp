class Solution {
public:
    vector<int> solution;
    
    vector<int> decompressRLElist(vector<int>& nums) {
        if(nums.size() < 1){
            return solution;//when the size is 0 return the result
        }
        int count = *nums.begin();
        vector<int>::iterator it = nums.begin()+1;
        
        //Add the second number as many times as the first value says
        while(count > 0){
            solution.push_back(*it);
            count--;
        }
        
        nums.erase(nums.begin(), nums.begin()+2);//delete the first two elements        
        
        return decompressRLElist(nums);
    }
};