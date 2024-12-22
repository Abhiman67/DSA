/// 30 min laga diye iske ek sort karne ki wajah se you didnt have to sort it.
/// use heap now 

/// brute force solution  0(k*n)

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int iteration = 0; iteration < k; iteration++) {
            int n = nums.size();
            int min =0;

        for (int i=0;i<n;i++){

            if(nums[i]<nums[min]){
                min=i;
            }
        }
 
            if (!nums.empty()) {

                nums[min] *= multiplier;
            }
        }
 
        return nums;
    }
}; 

/// heap soln  min heap 


