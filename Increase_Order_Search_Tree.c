#include <stdio.h>
#include <stdlib.h>



struct TreeNode 
{ 
     int val; 
     struct TreeNode* left; 
     struct TreeNode* right; 
}; 
  
/* Helper function that allocates a new node with the 
   given data and NULL left and right pointers. */
struct TreeNode* newNode(int data) 
{ 
     struct TreeNode* node = (struct TreeNode*) 
                                  malloc(sizeof(struct TreeNode)); 
     node->val = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
} 

struct TreeNode* increasingBST(struct TreeNode* root) {
   if (!root)
        return root;
    if (root->left){
        struct TreeNode* temp = root->left;
        struct TreeNode* temp2 = root->left->right;
        root->left->right = root;
        root->left = temp2;
        return increasingBST(temp);
    }
    root->right = increasingBST(root->right);
    return root;
}


void printTree(struct TreeNode* root) 
{ 
	struct TreeNode * temp = root;
    if (temp == NULL) 
        return; 
  
  
    /* then print the data of node */
    printf("%d",temp->val); 
  
    /* now recur on right child */
    printTree(root->right); 
} 


int main(){

	struct TreeNode *root  = newNode(5); 
    root->left        = newNode(3); 
    root->right       = newNode(6); 
    root->left->left  = newNode(2); 
    root->left->right = newNode(4);
	root->left->left->left 	= newNode(1);
	root->right->right	 	= newNode(8);
	root->right->right->left= newNode(7);
	root->right->right->right= newNode(9);

	struct TreeNode * new_root = increasingBST(root);
	
	printf("\n");
	printTree(new_root);
	printf("\n\n");

return 0;

}
