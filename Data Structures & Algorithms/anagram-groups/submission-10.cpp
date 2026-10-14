class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> countS;
       
    
                for (int i=0;i<strs.size();i++)
                {
                string temp=strs[i];
                sort(strs[i].begin(),strs[i].end());
                 countS[strs[i]].push_back(temp);
                }
        vector<vector<string>> toReturn;
        for (auto it=countS.begin();it!=countS.end();it++)  
        {
            toReturn.push_back(it->second);
        }
        return toReturn;
    }
};
