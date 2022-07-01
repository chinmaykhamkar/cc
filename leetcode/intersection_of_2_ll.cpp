/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int c1=0,c2=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1){
            c1++;
            temp1=temp1->next;
        }
        while(temp2){
            c2++;
            temp2=temp2->next;
        }
        // cout<<c1<<" "<<c2;
        
        
        if(c1<c2){
            while(c1!=c2){
                headB=headB->next;
                c2--;
            }
        }
        else if(c1>c2){
            while(c1!=c2){
                headA=headA->next;
                c1--;
            }
        }
        
         if(c1==c2){
             // cout<<headA->val<<" "<<headB->val;
            while(headA && headB){
                if(headA == headB){
                    return headA;
                }
                else{
                    headA=headA->next;
                    headB=headB->next;
                }
            }
        }
        
        
        
        return NULL;
    }
};