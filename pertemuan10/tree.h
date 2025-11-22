#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

struct Node{
   int data;
   Node* left;
   Node* right;
};

//prototype fungasi-fungsi ADT
Node* createNode(int data);
Node* insertNode(Node* root, int data);
Node* searchNode(Node* root, int data);
Node* deleteNode(Node* root, int data);
Node* findMin(Node* root);

//treversal
void preorder(Node* root);
void inorder(Node* root);
void postorder(Node* root);

#endif
