class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>check;
        for(int a:arr){
            check[a]++;
        }
        unordered_set<int>freq;
        for(auto &p:check){
            int f=p.second;
            if(freq.count(f)>0){
                 return false;
            }
            freq.insert(f);
         }
        return true;
    }
};