class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       
        int min=-1;
        int min_index=-1;
       for(int i=0;i<nums.size();++i)
       {
           min=nums[i];
           min_index=i;
           for(int j=i+1;j<nums.size();++j)
           {
               if(nums[j]<min)
               {
                   min=nums[j];
                   min_index=j;
               }
           }
           // if(min_index!=-1)
            swap(nums[min_index],nums[i]);
       }
        
        
    return nums;
        
    }
    
    
};
