class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int maxlen,prefix=0;
        unordered_map <int,int> lens;
        for(int i=0;i<A.size();++i)
        {
            prefix+=A[i];
            
            if(prefix==0)
            {
                maxlen=i+1;
            }
            else
            {
                if (lens.find(prefix)==lens.end())
                {
                    lens[prefix]=i;
                }
                else
                {
                    maxlen=max(maxlen,i-lens[prefix]);
                }
            }
        }
        return maxlen;
    }
};
