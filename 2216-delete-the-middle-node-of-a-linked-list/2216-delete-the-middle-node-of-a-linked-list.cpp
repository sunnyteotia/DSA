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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *slow=head,*fast=head,*prev=NULL;
        bool flag=false;
        while(fast && fast->next){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
        flag=true;
        }
        if(!flag){
            head=NULL;
        }
        else{
             prev->next=slow->next;
        slow->next=NULL;
        }
       
        return head;
    }
};