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
        ListNode* temp=head;
        int c=0;
        while(temp){
            temp=temp->next;
            c++;
        }
        if(c==1){
            return head;
        }
        
        
        
        int mid = c/2;
        ListNode* ahead=head;
        ListNode* prev=head;
        ahead=ahead->next;
        // if(c%2==0){
          for(int i=0;i<mid-1;i++){
            prev=prev->next;
            ahead=ahead->next;
        }   
        // }
        // else{
        //      for(int i=0;i<mid;i++){
        //     prev=prev->next;
        //     ahead=ahead->next;
        //     }
        // }
       
        head=ahead;
        prev->next=NULL;
        
        return head;
    }
};