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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        if(head&&head->next==NULL) return head;
        if(head&&head->next&&head->next->next==NULL) return head;
            int c=0;
            ListNode* t=head;
            while(t){
                c++;
                t=t->next;
            }
            ListNode* ptr=head;
            ListNode* nextptr=head;
            ListNode* temp=head;
            temp=temp->next;
            nextptr=nextptr->next;
            if(c%2==0){
                while(nextptr->next){
                ptr->next=nextptr->next;
                ptr=nextptr->next;
                nextptr->next=ptr->next;
                nextptr=ptr->next;                
                }
            }
        else{
            while(nextptr){
                ptr->next=nextptr->next;
                ptr=nextptr->next;
                nextptr->next=ptr->next;
                nextptr=ptr->next;
                
            }
        }
           
            ptr->next=temp;         
            return head;
        
    }
};