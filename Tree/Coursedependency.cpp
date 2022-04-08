class Solution {
public:
    map<int,bool> visited;
    map<int,bool> curr;
    // map<int,int> parent;
    map<int,list<int>> adj;
    bool dfss(int n)
    {
        bool y;
        for(int i=0;i<n;++i)
        {
            // y=false;
            if (dfs(i))
                return true;
                
            
        }
        // curr[s]=false;
        return false;
    }
    bool dfs(int s)
    {
        visited[s]=true;// visited the node
        curr[s]=true; // within the same dfs tree
        bool y;
        list<int>::iterator it;
        for(it=adj[s].begin();it!=adj[s].end();++it)
        {
            if(!visited[*it])
            {
                // parent[*it]=s;
                if(!visited[*it])
                    if(dfs(*it))
                        return true;
            }
            else if(curr[*it]) // within the same dfs tree
                return true;
        }
        curr[s]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        for(int i=0;i<numCourses;++i)
        {
            visited[i]=false;
            curr[i]=false;
            // parent[i]=-1;
        }
        for(int i=0;i<prerequisites.size();++i)
        {
            vector<int> a = prerequisites[i];
            adj[a[1]].push_back(a[0]);
        }
    
        if(!dfss(numCourses))
            return true;
        else
            return false;
    }
};
