#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
};
void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

struct node* insertion(struct node *ptr,int data, int loc)
{
    struct node *head=ptr;
    for(int i=0;i<loc;i++)
    {
        if(ptr!=NULL)
        {
            ptr=ptr->next;
            
        }else{
            cout<<"can't insert linked list exceed"<<endl;
        }
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;

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
head=insertion(head,40,4);
traversal(head);
}