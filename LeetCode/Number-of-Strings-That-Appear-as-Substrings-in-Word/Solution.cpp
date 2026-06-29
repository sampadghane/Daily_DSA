1class Solution {
2public:
3    int numOfStrings(vector<string>& patterns, string word) {
4        int s=word.size();
5        int ans=0;
6        for(string str:patterns){
7            int n=str.size();
8            for(int i=0;i<=s-n;i++){
9                if(word.substr(i,n)==str){
10                    cout<<word.substr(i, n)<<endl;
11                    ans++;
12                    break;
13                }
14            }
15        }
16        return ans;
17    }
18};