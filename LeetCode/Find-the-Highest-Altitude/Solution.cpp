1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int n=gain.size();
5        vector<int> vec(n+1);
6        vec[0]=0;
7        for(int i=1;i<=n;i++){
8            vec[i]=vec[i-1]+gain[i-1];
9        }
10        int max=vec[0];
11        for(int i=1;i<=n;i++){
12            if(vec[i]>max)max=vec[i];
13        }
14        return max;
15    }
16};