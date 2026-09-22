class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        vector<int>count(26,0);
        for(char ca:chars){
            count[ca-'a']++;
        }
        for(string ch:words){
            bool ans=true;
            vector<int>count1(26,0);
            for(char c:ch){
                 count1[c-'a']++;
            }
            for(char c:ch){
                if(count1[c-'a']>count[c-'a']){
                    ans=false;
                    break;
                }
            }
            if(ans){
                 res+=ch.length();
            }
        }
        return res;
    }
};