#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *ptr){
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
struct node *reverse(struct node *ptr)
{
    struct node *current=ptr;
    struct node *prev=NULL;
    struct node *nextNode=NULL;
    while(current!=NULL)
    {
        nextNode=current->next;
        current->next=prev;
        prev=current;
        current=nextNode;
    }
    return prev;
}
int main(){
    struct node *head= new struct node;
    struct node *first= new struct node;
    struct node *second=new struct node;
    
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=NULL;
    cout<<"Linkedlist before reverse"<<endl;
    traverse(head);
    head=reverse(head);
    cout<<endl;
       cout<<"Linkedlist after reverse"<<endl;
    traverse(head);
}

// prev  current nextNode 