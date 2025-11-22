#include "tree.h"

//membuat node baru
Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

//insert node recursive
Node* insertNode(Node* root, int data){
    if (root == nullptr) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

//FIND MINIMUM 
Node* searchNode(Node* root, int data){
    if(root == nullptr || root->data == data){
        return root;
    }
    if(data < root->data){
        return searchNode(root->left, data);
    }
    return searchNode(root->right, data);
}

Node* findMin(Node* root){
    while(root && root->left != nullptr){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int data){
    if (root == nullptr) return root;

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            // node with two children: get the inorder successor (smallest in the right subtree)
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

    void preorder(Node* root){
        if (!root) return;
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
    }

    void inorder(Node* root){
        if (!root) return;
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
    }

    void postorder(Node* root){
        if (!root) return;
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
    }