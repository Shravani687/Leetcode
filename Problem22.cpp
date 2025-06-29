class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       int freq = 0;
       int ans;

       for(int i=0;i<n;i++)
       {
        if(nums[i] == nums[i+1])
        {
            freq ++ ;
           
        }
         
        else
        {
            freq -- ;
        }
        ans = nums[i];
       }
      return ans;
    }
};
