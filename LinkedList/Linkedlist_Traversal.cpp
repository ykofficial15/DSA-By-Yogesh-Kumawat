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

    traversal(head);
    return 0;
}