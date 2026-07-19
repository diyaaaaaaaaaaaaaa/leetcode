#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return strs[0];
        int j=1;
        string op="";
        
        string temp= strs[0];

        while(j<strs.size()){
            op="";
            int k=0;
            while(k<temp.size() && k<strs[j].size()){
                if(temp[k]==strs[j][k]) op.push_back(strs[j][k]);
                else break;
                k++;
            }
            
            j++;
            temp=op;
            
        }
        
        return op;
    }
};