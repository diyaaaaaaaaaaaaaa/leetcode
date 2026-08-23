//first attemp- a lil complex but same logic
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> bill;

        for(int i=0;i<bills.size();i++){
            
            int x=bills[i]-5;
            while(x){
                if (x==15){
                    bill[10]--;
                    if(bill[10]<0) {
                        if(bill[5]<2) return false;
                        else bill[5]-=2;
                        bill[10]=0;
                    }
                    
                    x-=10;
                }
                else if (x==5){
                    bill[5]--;
                    if(bill[5]<0) return false;
                    x-=5;
                }
            }
            bill[bills[i]]++;
        }

        return true;
    }
};

//cleaner solution
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0, tens=0;

        for(int bill: bills){

            if(bill==5) {
                fives++;
            }

            else if(bill==10){
                if(fives==0) return false;
                fives--;
                tens++;
            }

            else {
                if (tens && fives) {
                    tens--;
                    fives--;
                }
                else if (fives>=3){
                    fives-=3;
                }
                else return false;
            }
        }

        return true;
    }
};