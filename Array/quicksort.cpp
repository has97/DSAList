class Solution {
public:
    int partition(vector<int>& nums,int low, int high)
    {
        int i=low-1;
        int pivot=nums[high];
        for(int j=low;j<=high-1;++j)
        {
            if(nums[j]<pivot)
            {
                ++i;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;
    }
    void quicksort(vector<int>& nums,int low,int high)
    {
        if(low<high)
        {
        int par=partition(nums,low,high);
        quicksort(nums,low,par-1);
        quicksort(nums,par+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
       
       quicksort(nums,0,nums.size()-1);
        
        
    return nums;
        
    }
    
    
};
