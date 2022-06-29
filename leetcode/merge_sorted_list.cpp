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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> temp;
        
        while(list1 && list2){
            if(list1->val<list2->val){
                temp.push_back(list1->val);
                list1 = list1->next;
            }
            else{
                temp.push_back(list2->val);
                list2 = list2->next;
            }
        }
        
        if(list1){
            while(list1){
                temp.push_back(list1->val);
                list1 = list1->next;
    
            }
          }
        else if(list2){
            while(list2){
                temp.push_back(list2->val);
                list2=list2->next;
            }
        }
        ListNode* root = createLL(temp,temp.size());
       
        
        return root;
    }
    ListNode* createLL(vector<int> &temp,int n){
        ListNode* root = NULL;
        for(int i=0;i<n;i++){
            insert(&root,temp[i]);
        }
        return root;
    }
    void insert(ListNode** root,int data){
        ListNode* node = new ListNode();
        node->val = data;
        node->next = NULL;
        ListNode* ptr;
        if(*root==NULL){
            *root = node;
        }
        else{
            ptr = *root;
            while(ptr->next != NULL){
                ptr=ptr->next;
            }
            ptr->next = node;
        }
    }
    
 };