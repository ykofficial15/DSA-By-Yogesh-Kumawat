#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)               //this function is used for linkedlist traversal
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

struct node* insertion(struct node *ptr,int val)    //this function is used for linked list element insertion at the end
{
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node *head=ptr;
    fourth->data=val;
    fourth->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=fourth;

return head;
    
}
int main(){
struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *first=(struct node*)malloc(sizeof(struct node));
struct node *second=(struct node*)malloc(sizeof(struct node));

head->data=10;
first->data=20;
second->data=30;
head->next=first;
first->next=second;
second->next=NULL;

cout<<"linked list before insertion"<<endl;
traversal(head);
cout<<endl;
cout<<"linked list after insertion"<<endl;
head=insertion(head,40);
traversal(head);

}