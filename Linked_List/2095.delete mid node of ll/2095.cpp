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
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp= head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }

        if (cnt==1) return nullptr;

        int mid= cnt/2 - 1;

        ListNode* mover= head;
        while (mid){
            mover=mover->next;
            mid--;
        }

        ListNode* middle=mover->next;

        mover->next=middle->next;
        middle->next=nullptr;

        return head;

    }
};