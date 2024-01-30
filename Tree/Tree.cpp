#include<iostream>
using namespace std;
struct node{
    struct node *right;
    struct node *left;
    int data;
};

void traverse(struct node *ptr)
{
    if(ptr!=NULL)
    {
        traverse(ptr->left);
        cout<<ptr->data<<" ";
        traverse(ptr->right);
    }
}

int main(){
    struct node *root=new struct node;
    struct node *first=new struct node;
    struct node *second=new struct node;
    struct node *third=new struct node;
    struct node *fourth=new struct node;

    root->left=first;
    root->right=second;
    root->data=10;

    first->left=third;
    first->right=fourth;
    first->data=20;

    second->left=NULL;
    second->right=NULL;
    second->data=30;

    third->left=NULL;
    third->right=NULL;
    third->data=40;

    fourth->left=NULL;
    fourth->right=NULL;
    fourth->data=50;

    traverse(root);

    return 0;
}