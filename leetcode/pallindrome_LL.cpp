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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        
        for(int i=0;i<a.size();i++){
            if(a[i] != a[a.size()-1-i]){
                return false;
            }
        }
        
        return true;
    }
};

//better sol
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
    bool isPalindrome(ListNode* head) {
       
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp;
        ListNode* prev = NULL;
        while(fast&&fast->next){
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        
        if(fast){
            slow=slow->next;
        }
        
        while(slow){
            if(slow->val!=prev->val){
                return false;
            }
            else{
                slow = slow->next;
                prev=prev->next;
            }
        }
       
        return true;
       
    }
    
    
};