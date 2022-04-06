class Solution {
public:
    void maxheapify(vector<int>&nums, int n , int i)
    {
        int largest=i;

            if((2*i+1)<n && nums[2*i+1]>nums[i])
            {
                largest=2*i+1;
            }
            if((2*i+2)<n && nums[2*i+2]>nums[largest])
            {
                largest=2*i+2;
            }
            if(largest!=i)
            {
                swap(nums[i],nums[largest]);
                maxheapify(nums,n,largest);
            }
            
    }
    void heapsort(vector<int>&nums,int n)
    {
        for(int i=n/2-1;i>=0;i--)
        {
            maxheapify(nums,n,i);
        }
        for(int i=n-1;i>=1;i--)
        {
            swap(nums[i],nums[0]);
            maxheapify(nums,i,0);
        }
        
            
    }
    vector<int> sortArray(vector<int>& nums) {
       
        
        heapsort(nums,nums.size());
        
        return nums;
        
        
    }
    
    
};
