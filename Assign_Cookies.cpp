class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        
        int i=0, j=0;
        
        sort(g.begin() , g.end());
        
        sort(s.begin() , s.end());
        
        if(s.size() == 0){
             return 0;
        }
           
        while(i<g.size() && j<s.size())
        {
            if(s[j] >= g[i])
            {
                i++;
                j++;
                ans++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
