#include <stdio.h>
#include <stdlib.h>


struct node {

	int data;
	struct node * left;
	struct ndoe * right;
};

struct Stack { 
    int size; 
    int top; 
    struct node* *array; 
}; 
  

struct ndoe * NewNode(int data){
	struct node * node = (struct node *) malloc (sizeof(struct node));
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;

return (node);
}


struct Stack* createStack(int size) 
{ 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
    stack->size = size; 
    stack->top = -1; 
    stack->array = (struct node**) malloc(stack->size * sizeof(struct node*)); 
    return stack; 
} 

int isFull(struct Stack* stack) 
{  return stack->top - 1 == stack->size; } 
  
int isEmpty(struct Stack* stack) 
{  return stack->top == -1; } 
  
void push(struct Stack* stack, struct Node* node) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = node; 
} 
  
struct node* pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return NULL; 
    return stack->array[stack->top--]; 
} 
  
struct node* peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return NULL; 
    return stack->array[stack->top]; 
} 

void Preorder(struct node * root){
	struct Stack * S = CreateStack();
	while(1){
		












}



}




int main(){

	struct node * root 	= NewNode (1);
	root -> left 		= NewNode (2);
	root -> right		= NewNode (3);
	root -> left -> left= NewNode (4);
	root -> left -> right = NewNode (5);

	printf("\nPreorder traversal of binary tree is \n"); 
    Preorder(root); 
	
return 0;

}
