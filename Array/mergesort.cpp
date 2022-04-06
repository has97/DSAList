class Solution {
public:
    void merge(vector<int>&nums,int low,int mid,int high)
    {
        int ll=mid-low+1;
        int rr=high-mid;
        int larray[ll],rarray[rr];
  
        for(int i=0;i<mid-low+1;++i)
        {
            larray[i]=nums[low+i];
        }
        for(int i=0;i<high-mid;++i)
        {
            rarray[i]=nums[mid+i+1];
        }
        int li=0,ri=0,i=low;
        while(li < mid-low+1 && ri<high-mid)
        {
            if(larray[li]<rarray[ri])
            {
                nums[i]=larray[li];
                ++i;
                ++li;
            }
            else
            {
                nums[i]=rarray[ri];
                ++i;
                ++ri;
            }
        }
        while(li<mid-low+1)
        {
                nums[i]=larray[li];
                ++i;
                ++li;
        }
        while(ri<high-mid)
        {
                nums[i]=rarray[ri];
                ++i;
                ++ri;
        }
        
    }
    void mergesort(vector<int>& nums,int high,int low)
    {
        int mid=low + (high-low)/2;
        if(low<high)
        {
        mergesort(nums,mid,low);
        mergesort(nums,high,mid+1);
        merge(nums,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
       
       mergesort(nums,nums.size()-1,0);
        
        
    return nums;
        
    }
    
    
};
