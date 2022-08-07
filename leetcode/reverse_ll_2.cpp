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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head && !head->next) return head;
        if(left==right) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev=dummy;
        ListNode* tempprev = prev;
        ListNode* curr = head;
        ListNode* node = head;
        int count = 1;
        while(head){
            if(count>=right) break;
            if(count==left){
                while(count!=right){
                    curr = curr->next;
                    head->next = prev;
                    prev = head;
                    head = curr;
                    count++;
                }
                curr = curr->next;
                head->next = prev;
                prev = head;
                head = curr;
            }
            else{
                curr=curr->next;
                prev = head;
                tempprev = head;
                head = curr;
                count++;
            }
            
        }
        
        tempprev->next->next = head;
        tempprev->next = prev;
        
        return dummy->next;
        
        
        
    }
};