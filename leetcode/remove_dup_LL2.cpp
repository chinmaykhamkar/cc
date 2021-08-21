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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> arr,dup;
        ListNode* temp=head;
        int i;
        if(head == NULL) return NULL;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        for(i=0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]){
                dup.push_back(arr[i]);
            }
        }
        
        dup.erase(unique(dup.begin(),dup.end()),dup.end());
        for(i=0;i<dup.size();i++){
            arr.erase(remove(arr.begin(),arr.end(),dup[i]),arr.end());
        }
         
        reverse(arr.begin(),arr.end());
        ListNode* newnode = NULL;
        if(arr.size() == 0){
            return NULL;
        }
        append(&newnode,arr[0]);
        for(i=1;i<arr.size();i++){
            push(&newnode,arr[i]);
        } 
        
        return newnode;       
        
    }
    
    void append(ListNode** head_ref,int data){
        ListNode* ptr = new ListNode();
        ListNode* last = *head_ref;
        ptr->val = data;
        ptr->next = NULL;
        if(*head_ref == NULL){
            *head_ref = ptr;
            return;
        }
        while(last->next != NULL){
            last = last->next;
        }
        last->next = ptr;
        return;
    }
    
    void push(ListNode** head_ref,int data){
        ListNode* ptr = new ListNode();
        ptr->val = data;
        ptr->next = *head_ref;
        *head_ref = ptr;
    }
};