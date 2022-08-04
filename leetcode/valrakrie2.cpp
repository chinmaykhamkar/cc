#include <vector>
#include <iostream>
using namespace std;

struct Node {
	int val;
	struct Node* left;
    struct Node* right;
};

struct Node* newNode(int val)
{
	struct Node* ptr = new Node;
	ptr->val = val;
	ptr->left = ptr->right = NULL;
	return ptr;
}

struct Node* insert(struct Node* root, int val)
{
	if (!root) root = newNode(val);
	else if (root->val > val){
		root->left = insert(root->left, val);
    }
	else if (root->val < val){
		root->right = insert(root->right, val);
    }
	return root;
}

//function to search if node is present in tree or not 
bool search(struct Node* root, int val)
{
    if (!root) return false;
    else if (root->val == val) return true;
    else if (root->val > val){
        return search(root->left, val);
    }
    else{
        return search(root->right, val);
    }
}


//to find distance from root node to given node
int rootDistance(struct Node* root, int x)
{
	if (root->val == x) return 0;
	else if (root->val > x){
		return 1 + rootDistance(root->left, x);
    }
	return 1 + rootDistance(root->right, x);
}

//find distance btw 2 nodes
int findDistance(struct Node* root, int a, int b){

	if (!root) return 0;

	
	if (root->val > a && root->val > b){        
        return findDistance(root->left, a, b);
    }	

	
	if (root->val < a && root->val < b){
        return findDistance(root->right, a, b);
    };

	
	if (root->val >= a && root->val <= b){
        return rootDistance(root, a) + rootDistance(root, b);
    } 
}

int BSTdistance(const std::vector<int>& values, int nodeA, int nodeB)
{
    // TODO your code here
    struct Node *root = NULL;
    int i,n=values.size();
    if(n==0 || n ==1){ // return -1 if size of array is 0 or 1 as this case is not feasible
        return -1;
    }
    int distance;
    root = insert(root,values[0]); // create a bst
    for(i=1;i<n;i++){
        insert(root,values[i]);
    }

    // cout<<search(root,nodeA)<<" "<<search(root,nodeB)<<endl;
    if(nodeA>nodeB){
        swap(nodeA,nodeB);
    }
    if(search(root,nodeA) && search(root,nodeB)){ // check if both nodes are in the tree
        distance = findDistance(root,nodeA,nodeB);
        // distance = 10;
        
    }
    else{
        distance = -1;
    }

    cout<<distance;
    return distance;
}
int main ()
{
    BSTdistance({ 8, 7, 13, 6, 2, 5, 1, 9, 11, 3, 4, 10}, 1,10);
}