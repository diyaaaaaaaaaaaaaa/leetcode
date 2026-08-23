//1st
#include<string>
#include <numeric>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.size(), b=str2.size();
        string x="", y="";

        if(a<b) {
            x=str1; y=str2;
        }
        else if(a>b) {
            x=str2; y=str1;
        }
        else{
            if(str1==str2) return str1;
            else return x;
        }

        int i=0, j=x.size();

        while(x.size()!=0){

            if (j>y.size() || y.substr(i,j)!=x){
                x=x.substr(0,x.size()-1);
                i=0;
                j=x.size();
            }

            else if (y.substr(i,j)==x) {
                if(i+j>=y.size()) return x;
                i+=j;
                //j+=j;
            }
        }
        
        return "";
    }
};

//2nd
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.size(), b=str2.size();

        if(str1+str2!=str2+str1) return "";

        return str2.substr(0,gcd(a,b));
    }
};