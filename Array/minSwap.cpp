class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<int> n_sort = nums;
	    map<int,int> hash;
	    int id,idt;
	    int c=0;
	    for(int i=0;i<nums.size();++i)
	    {
	       hash[nums[i]]=i; 
	    }
	    sort(n_sort.begin(),n_sort.end());
	    for(int i=0;i<nums.size();++i)
	    {
	        if(n_sort[i]!=nums[i])
	        {
	            id=hash[nums[i]];
	            idt=hash[n_sort[i]];
	            swap(nums[idt],nums[id]);
	            hash[nums[id]]=id;
	            hash[nums[idt]]=idt;
	            c+=1;
	        }
	    }
	    return c;
	    
	}
};
