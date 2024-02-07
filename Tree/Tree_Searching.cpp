#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    void insert(int value) {
        if (value < data) {
            if (left == NULL) {
                left = new node(value);
            } else {
                left->insert(value);
            }
        } else {
            if (right == NULL) {
                right = new node(value);
            } else {
                right->insert(value);
            }
        }
    }


    void preorder() {                                              // I have use preorder traversal for faster searching
        cout << data << " ";
        if (left != NULL) {
            left->preorder();
        }
        if (right != NULL) {
            right->preorder();
        }
    }

  bool search(int value) {
        if (value == data) {
            return true;
        } else if (value < data) {
            if (left == NULL) {
                return false;
            } else {
                return left->search(value);
            }
        } else {
            if (right == NULL) {
                return false;
            } else {
                return right->search(value);
            }
        }
    }

};

int main() {
    node* tree = new node(10);
    tree->insert(5);
    tree->insert(15);
    tree->insert(3);
    tree->insert(7);
    tree->preorder();
    cout << endl;
    if(tree->search(15))
    {
        cout<<"Node present in the tree";
    }
    else{
        cout<<"Node is not present in the tree";
    }
    return 0;
}
