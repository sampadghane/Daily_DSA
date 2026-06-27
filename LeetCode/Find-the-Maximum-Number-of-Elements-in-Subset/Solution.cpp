1class Solution {
2public:
3    int maximumLength(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<long long, int>freq;
6        for(int num:nums)freq[num]++;
7        int ans=1;
8        if(freq.find(1)!=freq.end()){
9            if(freq[1]%2!=0){
10                ans=max(freq[1], ans);
11            }
12            else ans=max(freq[1]-1, ans);
13        }
14
15        for(auto [num, count]:freq){
16            if(num==1)continue;
17            long long x=num;
18
19            int len=0;
20
21            while(freq.count(x) && freq.at(x) >= 2){
22                len+=2;
23                if(x>1000000000LL/x){
24                    x = 1000000001LL;
25                    break;
26                }
27                x=x*x;
28            }
29            if(freq.count(x))len++;
30            else len--;
31            ans=max(ans, len);
32
33
34        }
35        return ans;
36    }
37};