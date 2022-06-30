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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* root = NULL;
        root = new ListNode();
        ListNode* head = root;
        
        // cout<<head->val;
        
        while(l1 && l2){
            ListNode* temp = new ListNode();
            int sum = l1->val+l2->val+carry;
            int ans = sum%10;
            carry = sum/10;
            temp->val = ans;
            temp->next = NULL;
            root->next = temp;
            root = root->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        
        while(l1){
            ListNode* temp = new ListNode();
            int sum = l1->val+carry;
            int ans = sum%10;
            carry = sum/10;
            temp->val = ans;
            temp->next = NULL;
            root->next = temp;
            root = root->next;
            l1 = l1->next;            
            
        }
        
        while(l2){
            ListNode* temp = new ListNode();
            int sum = l2->val+carry;
            int ans = sum%10;
            carry = sum/10;
            temp->val = ans;
            temp->next = NULL;
            root->next = temp;
            root = root->next;
            l2 = l2->next;            
            
        }
        
        if(carry){
            ListNode* temp = new ListNode();
            temp->val = carry;
            temp->next = NULL;
            root->next = temp;
            root = root->next;
            
        }
        
        
        
        
        
        return head->next;
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<int> f,s,ans;
//         ListNode* temp1;
//         temp1 = l1;
//         while(temp1){
//             f.push_back(temp1->val);
//             temp1=temp1->next;
//         }
//         ListNode* temp2;
//         temp2 = l2;
//         while(temp2){
//             s.push_back(temp2->val);
//             temp2=temp2->next;
//         }
//         int i;
//         long int fi=0,se=0;
        
        
//         for(i=f.size()-1;i>=0;i--){
//             fi+=f[i];
//             fi*=10;
//         }
        
//         for(i=s.size()-1;i>=0;i--){
//             se+=s[i];
//             se*=10;
//         }
//         fi=fi/10;
//         se=se/10;
//         // cout<<fi<<" "<<se<<" ";
//         long int a = fi+se; // 807
//         // cout<<a;
        
//         ListNode* root=NULL;                
//         root = new ListNode();
//         root->val = a%10;
//         root->next = NULL;
//         ListNode* head = root;
//         a=a/10;
//         while(a){            
//             ListNode* temp = new ListNode();            
//             temp->val = a%10;
//             temp->next = NULL;
//             root->next = temp;
//             root = root->next;
//             a=a/10;
            
//         }
        
//         // cout<<endl;
//         // for(i=0;i<s.size();i++){
//         //     cout<<s[i]<<" ";
//         // }
        
        
        
//         return head;
    }
};