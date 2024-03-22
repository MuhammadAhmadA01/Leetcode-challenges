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
    bool isPalindrome(ListNode* head) {
         ListNode *temp=head;
        int count=0;
        bool flag=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            ++count;
            
        }
        int *arr=new int [count];
        temp=head;
        count=0;
        while(temp!=NULL)
        {
            arr[count]=temp->val;
            temp=temp->next;
            count++;
        }
        for(int i =0;i<=count/2;i++)
        {
           if(arr[i]!=arr[count-i-1])
           {
               flag=1;
               break;
           }
        }
        if(flag)
            return false;
        return true;
        
    }
};