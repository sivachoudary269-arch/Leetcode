class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n=distance.size();
        int s=min(start,destination);
        int d=max(start,destination);
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            if(i>=s&&i<d){
               sum1+=distance[i];
               start++;
            }
            sum2+=distance[i];
        }
        return min(sum1,sum2-sum1);
    }
};