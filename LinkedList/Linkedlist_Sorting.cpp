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
int findLength(struct node *head) {
    int length = 0;
    struct node *current = head;

    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}
void deletion(struct node *head, int loc) {
    // Check if the linked list is empty
    if (head == NULL) {
        cout << "Linked list is empty. Deletion not possible." << endl;
        return;
    }

    // Check if the deletion location is valid
    int length = findLength(head);
    if (loc < 1 || loc > length) {
        cout << "Invalid deletion location." << endl;
        return;
    }

    // Case: Deleting the first node
    if (loc == 1) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        cout << "Node deleted at location " << loc << endl;
        return;
    }

    // Case: Deleting nodes other than the first node
    struct node *current = head;
    struct node *previous = NULL;

    for (int i = 1; i < loc; i++) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    free(current);
    cout << "Node deleted at location " << loc << endl;
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
cout<<"Linkedlist after deletion"<<endl;
deletion(head,2);
    traversal(head);
}