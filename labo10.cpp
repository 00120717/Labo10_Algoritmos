#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


struct node{
int key;
struct node *left, *right;
};
// A utility function to create a new BST node
struct node *newNode(int item){
struct node *temp = (struct node *)malloc(sizeof(struct node));
temp->key = item;
temp->left = temp->right = NULL;
return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root, vector<node*> &L){

    if (root != NULL){
    inorder(root->left);
    //printf("%d \n", root->key);
    L.push_back = root->key;
    inorder(root->right);
    }

}

struct node* insert(struct node* node, int key)
{
/* If the tree is empty, return a new node */
if (node == NULL) return newNode(key);
/* Otherwise, recur down the tree */
if (key < node->key)
node->left = insert(node->left, key);
else if (key > node->key)
node->right = insert(node->right, key);
/* return the (unchanged) node pointer */
return node;
}



struct node* balanceTree(vector<int> L,int inicio=0,int fin{
    
    int mid = (final+inicio)/2;
    node * root = newNode(L[mid]);
    
    root->left = balanceTree(L,inicio,mid-1);
    root->left = balanceTree(L,mid+1,final);
    
    return root;
}

int main(){

    node * root = newNode(9); 
    root->left = newNode(7); 
    root->right = newNode(12); 
    root->left->left = newNode(6); 
    root->left->right = newNode(8); 
    root->right->left = newNode(10); 
    root->right->left = newNode(15);
    root->right->left = newNode(3);
    
    L = inorder(root,L);
    
return 0;
}
