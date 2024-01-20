#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr){

    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

struct node *deletion(struct node *ptr,int index) //this function is used to delete element from the linkedlist
{
    struct node *p=ptr;
    struct node *q=ptr->next;
    int i=0;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
return ptr;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
 // connection of data nodes
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=NULL;
   cout<<"Linkedlist will be"<<endl;
    traversal(head);
    cout<<endl;
    cout<<"Linkedlist after deletion"<<endl;
    head=deletion(head,2);  //you can change the index value from here 
    traversal(head);
    return 0;
}