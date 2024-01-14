#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
struct node* insertbegin(struct node* ptr, int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=5;
    newnode->next=ptr;
    return newnode;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=NULL;
    cout<<"before insertion"<<endl;
    traverse(head);
    cout<<endl;
    cout<<"after insertion"<<endl;
    head=insertbegin(head,5);
     traverse(head);
}