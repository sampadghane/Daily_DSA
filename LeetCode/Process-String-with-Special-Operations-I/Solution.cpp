1class Solution {
2public:
3    string processStr(string s) {
4        string ans="";
5        for(char ch:s){
6            if(ch>='a'&&ch<='z')ans+=ch;
7            else if(ch=='*'){
8                if(!ans.empty()){
9                    ans.pop_back();
10                }
11            }
12            else if(ch=='#')ans+=ans;
13            else reverse(ans.begin(), ans.end());
14        }
15        return ans;
16    }
17};