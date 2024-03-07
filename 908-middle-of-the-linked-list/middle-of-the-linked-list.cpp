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
    ListNode* middleNode(ListNode* head) {
            int c=0;
        ListNode * t=head;
        while(t){
            t=t->next; ++c;
        }
        
        t=head;
        int i=0;
        while(i<c/2){
            t=t->next;
            ++i;
        }
        return t;
    }
};