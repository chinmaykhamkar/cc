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
    void reorderList(ListNode* head) {
        ListNode* temp;
        while(head && head->next && head->next->next){
            temp = head;
            while(temp->next->next) temp=temp->next;
            temp->next->next = head->next;
            head->next = temp->next;
            temp->next = NULL;
            head = head->next->next;
        }
        
        
    }
};