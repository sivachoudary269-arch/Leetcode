class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int s=prices.size();
        vector<int>check;
        for(int i=0;i<s;i++){
            int dis=0;
           for(int j=i+1;j<s;j++){
              if(prices[j]<=prices[i]){
                  dis=prices[j];
                  break;
              }
           }
           check.push_back(prices[i]-dis);
        }
        return check;
    }
};