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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* temp=NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        return merge(l1,l2);
    }
    
    ListNode* merge(ListNode* l1,ListNode* l2){
        
        ListNode* ptr = new ListNode(0);
        ListNode* node = ptr;
        
        while(l1&&l2){
            if(l1->val <= l2->val){
                ptr->next = l1;
                
                l1=l1->next;
            }
            else{
                ptr->next = l2;
                
                l2=l2->next;
            }
            
            ptr = ptr->next;
        }
        
        while(l1){
            ptr->next = l1;            
            l1=l1->next;
            ptr=ptr->next;
        }
        while(l2){
            ptr->next = l2;            
            l2=l2->next;
            ptr=ptr->next;
        }
        
        return node->next;
    }
    
};