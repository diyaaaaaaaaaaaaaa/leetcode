#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string l= to_string(low);
        string h=  to_string(high);
        string digits= "123456789";
        vector<int> op;
        for(int i=l.size();i<=h.size();i++){
            for(int j=0; j<=9-i;j++){
                string smol= digits.substr(j,i);
                int num= stoi(smol);
                if (num>=low && num<=high) op.push_back(num);
            }
        }

        return op;
    }
};

