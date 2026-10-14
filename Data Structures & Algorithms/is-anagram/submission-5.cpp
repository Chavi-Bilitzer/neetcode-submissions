class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());
       int i=0;
       if(s.length()!=t.length())
       {
        return false;
       }
       while (s[i] && t[i])
       {
        if(s[i]!=t[i]){
          return false;
        }
        i++;
       }
      
    return true;
      
      
    }
};
