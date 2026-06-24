1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        sort(costs.begin(), costs.end());
5        int ans=0;
6        int i=0;
7        int n=costs.size();
8        while(i<n&&coins>0){
9            if(coins<costs[i])return ans;
10            ans++;
11
12            coins-=costs[i];
13            i++;
14        }
15        return ans;
16    }
17};