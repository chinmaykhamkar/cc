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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next == NULL){
           return head;
       }
        
        ListNode* prev=head;
        ListNode* itr=head;
        ListNode* count=head;
        int len=0;
        while(count){
            count=count->next;
            len++;
        }
        k=k%len;
        for(int i=1;i<=k;i++){
            itr=itr->next;
            while(itr->next){
                itr=itr->next;
                prev=prev->next;
            }
            
            itr->next = head;
            head=prev->next;
            itr=head;
            prev->next=NULL;
            prev=head;
            } 
        
            return head;
        }
    };

//better approach
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(!head) return NULL;
        int count=0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp=temp->next;
        }        
        k = k%count;
        cout<<count;
        if(k==0) return head;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        int i;
        for(i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        
        
        
        return head;
        
        
    }
    
    
};