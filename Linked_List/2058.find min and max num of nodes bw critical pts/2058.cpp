#include<vector>
#include<algorithm>
#include <forward_list>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head->next->next==nullptr || head->next->next->next==nullptr) return {-1,-1};

        vector<int> criticalpts;
        int pos=1;

        
        ListNode* prev= head;

        while(prev->next->next){
            ListNode* temp=prev->next;
            pos++;
            if (temp->val > prev->val && temp->val > temp->next->val) {
                criticalpts.push_back(pos);
            }
            else if (temp->val < prev->val && temp->val < temp->next->val) {
                criticalpts.push_back(pos);
            }
            prev=prev->next;
        }

        if (criticalpts.size()<2) return {-1,-1};
        else {
            int dis= criticalpts[1]-criticalpts[0];
            int minDistance=dis;
            int maxDistance =criticalpts[criticalpts.size()-1]-criticalpts[0];

            for (int i=2;i<criticalpts.size();i++){
                dis= criticalpts[i]-criticalpts[i-1];

                minDistance= min(minDistance,dis);
            }
            return {minDistance, maxDistance};
        }

        return {-1,-1};
    }
};