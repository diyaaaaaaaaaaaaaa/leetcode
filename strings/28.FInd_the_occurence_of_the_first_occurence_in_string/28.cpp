#include <string>
using namespace std;

//1st
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int op=-1;
        if (haystack.size()<needle.size()) return -1;

        while (i<haystack.size() && j<needle.size()){
            if (haystack[i]==needle[j]){
                if (op==-1) op=i;
                j++;
                i++;
            }
            else {
                j=0;
                if (op!=-1) i=++op;
                else i++;
                op=-1;
            }
        }
        return j == needle.size() ? op : -1;
    }
};

//2nd
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        //if(haystack==needle) return 0;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            if(haystack.substr(i, needle.size())==needle) return i;
            else continue;
        }
        return -1;
    }
};