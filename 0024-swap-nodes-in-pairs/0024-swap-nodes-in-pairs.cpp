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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* nxt=NULL,*prev=NULL,*curr;
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        curr=head;int c=0;
        while(curr!=NULL && curr->next!=NULL){
            c++;
            nxt=curr->next;
            if(prev!=NULL)
            prev->next=nxt;
            curr->next=nxt->next;
            nxt->next=curr;
            temp->next=nxt;
            temp=temp->next->next;
            prev=curr;
            curr=curr->next;
        }
        if(c==0)return head;
        return dummy->next;
    }
};