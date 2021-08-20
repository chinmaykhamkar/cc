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
        ListNode* newnode = new ListNode();
        newnode->val=0;
        newnode->next=head;
        head=newnode;
        
        ListNode *prev=head,*mid=head,*curr=head;
        while(mid->next!=NULL && mid->next->next!=NULL){
            prev=mid;
            mid=mid->next;
            curr=mid->next;
            
            mid->next=curr->next;
            curr->next=mid;
            prev->next=curr;
            
        }
        
        
        return newnode->next;
    }
};