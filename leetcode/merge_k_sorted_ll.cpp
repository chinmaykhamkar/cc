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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size()==0) return NULL;
        priority_queue<int,vector<int>,greater<int>> q;
        int i;
        for(i=0;i<lists.size();i++){
            ListNode* head = lists[i];
            while(head){
                q.push(head->val);
                head = head->next;
            }
        }
        
        ListNode* s = NULL;
        ListNode* e = NULL;
        while(!q.empty()){
            if(s == NULL){
                s = new ListNode(q.top());
                e = s;
                q.pop();
            }
            else{
                e->next = new ListNode(q.top());
                q.pop();
                e = e->next;
            }
        }
        
        return s;
    }
};