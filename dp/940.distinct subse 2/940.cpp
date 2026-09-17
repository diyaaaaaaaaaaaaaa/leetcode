//recursion(TLE)
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    void f(int id, int& cnt, int n, string& smol, string& s,vector<string>& ans){
        if(id>=n) {
            bool exists=false;
            for(auto it:ans){
                if(it==smol){
                    exists=true;
                    break;
                }
            }
            if(!exists){
                    cnt++;
                    ans.push_back(smol);
                    exists=false;
            }
            
            return;
        }
        smol.push_back(s[id]);
        f(id+1, cnt, n, smol, s, ans);
        smol.pop_back();
        f(id+1, cnt, n, smol, s,ans);
    }

    int distinctSubseqII(string s) {
        int cnt=0;
        int n=s.size();
        string smol="";
        vector<string> ans;
        f(0, cnt, n, smol, s, ans);

        return cnt-1;
    }
};