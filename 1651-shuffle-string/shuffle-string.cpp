class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str="";
        int l=indices.size();
        unordered_map<int,char>m;
        for(int i=0;i<l;i++){
              m[indices[i]]=s[i];     
        }
        int j=0;
        while(j<l){
           for(int i=0;i<l;i++){
            for(auto &p:m){
                if(p.first==j){
                  str+=p.second;
                  j++;
                  break;
              }
            }
           }
        }
        return str;   
    }
};