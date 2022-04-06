class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       
        int min=-1;
        int min_index=-1;
       for(int i=1;i<nums.size();++i)
       {
           for(int j=i;j>=1;--j)
           {
               if(nums[j]<nums[j-1])
               {
                   swap(nums[j],nums[j-1]);
               }
               
           }
           // if(min_index!=-1)
       }
        
        
    return nums;
        
    }
    
    
};
