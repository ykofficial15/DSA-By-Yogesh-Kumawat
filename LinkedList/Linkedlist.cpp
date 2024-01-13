#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

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
 cout<<second->data<<endl; //you can change the data name to print other values
 return 0;
}