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

 //better aporach
 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1== NULL && list2 == NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode* curr=NULL;
        ListNode* head = NULL;
        if(list1->val < list2->val){
            curr = list1;
            head = list1;
            list1=list1->next;
        }
        else{
            curr = list2;
            head = list2;
            list2=list2->next;
        }
        
        
        while(list1 && list2){
            if(list1->val<list2->val){
                curr->next = list1;
                curr = curr->next;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                curr = curr->next;
                list2 = list2->next;
            }
        }
        
        while(list1){
            curr->next = list1;
            curr = curr->next;
            list1 = list1->next;
        }
        while(list2){
            curr->next = list2;
            curr = curr->next;
            list2 = list2->next;
        }
        
        
        return head;
        
    }