#include<iostream>
using namespace std;

struct node {
    struct node* right;
    struct node* left;
    int data;
};

void traverse(struct node* ptr) {
    if (ptr != NULL) {
        traverse(ptr->left);
        cout << ptr->data << " ";
        traverse(ptr->right);
    }
}

struct node* insert(struct node* ptr, int data) {
    if (ptr == NULL) {
        struct node* newNode = new struct node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    } else {
        if (data < ptr->data) {
            ptr->left = insert(ptr->left, data);
        } else if (data > ptr->data) {
            ptr->right = insert(ptr->right, data);
        }
        return ptr;
    }
}

struct node* findMin(struct node* ptr) {
    while (ptr->left != NULL) {
        ptr = ptr->left;
    }
    return ptr;
}

struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children, get the inorder successor (smallest in the right subtree)
        struct node* temp = findMin(root->right);

        // Copy the inorder successor's data to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct node* root = new struct node;
    struct node* first = new struct node;
    struct node* second = new struct node;
    struct node* third = new struct node;
    struct node* fourth = new struct node;

    root->left = first;
    root->right = second;
    root->data = 10;

    first->left = third;
    first->right = fourth;
    first->data = 20;

    second->left = NULL;
    second->right = NULL;
    second->data = 30;

    third->left = NULL;
    third->right = NULL;
    third->data = 40;

    fourth->left = NULL;
    fourth->right = NULL;
    fourth->data = 50;

    cout << "Original tree: ";
    traverse(root);
    cout << endl;

    root = deleteNode(root, 10);

    cout << "Tree after deletion: ";
    traverse(root);

    // Don't forget to free the memory allocated for nodes
    delete root;
    delete first;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
