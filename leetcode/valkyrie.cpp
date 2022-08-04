#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
    
struct node {
  int val;
  struct node *left, *right;
};


struct node *newNode(int val) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->val = val;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insert(struct node *node, int val) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(val);

  // Traverse to the right place and insert the node
  if (val < node->val)
    node->left = insert(node->left, val);
  else
    node->right = insert(node->right, val);

  return node;
}

bool search(struct node *node, int val) {
  // Return false if the tree is empty
  if (node == NULL) return false;

  // Traverse to the right place and insert the node
  if (val < node->val)
    return search(node->left, val);
  else if (val > node->val)
    return search(node->right, val);
  else
    return true;
}




int main()   
{        
    vector<int> arr = {8, 7, 13, 6, 2, 5, 1, 9, 11, 3, 4, 10 };
    struct node *root = NULL;
    int i,n=arr.size();

    for(i=0;i<n;i++)
    {
        root=insert(root,arr[i]);
    }
    
    int a=4,b=12;
    cout<<search(root,a)<<" "<<search(root,b);
    if(search(root,a) && search(root,b)){
        cout<<"yes";
    }
    else{
        return -1;
    }
        



    return 0;   
} 