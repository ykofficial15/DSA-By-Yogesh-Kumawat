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

void searching(struct node *ptr,int key)  //this function is used for searching a particular element in the linkedlist
{
    int index=0;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            cout<<"Key "<<key<<" found at index: "<<index<<endl;
            break;
        }
        else{
            index++;
            ptr=ptr->next;
        }
    }
    
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
    cout<<"Linkedlist will be"<<endl;
    traversal(head);
    cout<<endl;
    searching(head,20);
    return 0;
}