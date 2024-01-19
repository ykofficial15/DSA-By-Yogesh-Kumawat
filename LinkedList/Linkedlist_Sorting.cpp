#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void traversal(struct node *ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int findLength(struct node *head) { //this function is used for finding length of the linkedlist
    int length = 0;
    struct node *current = head;

    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

void bubbleSort(struct node *head) {  //here i have used bubble sort to sort the linkedlist elements
    int length = findLength(head);

    for (int i = 0; i < length - 1; i++) {
        struct node *current = head;
        struct node *nextNode = head->next;

        for (int j = 0; j < length - i - 1; j++) {
            if (current->data > nextNode->data) {
                // Swap data
                int temp = current->data;
                current->data = nextNode->data;
                nextNode->data = temp;
            }

            // Move to the next nodes
            current = current->next;
            nextNode = nextNode->next;
        }
    }
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    first->data = 20;
    second->data = 5;  // Added an unsorted node for illustration
    head->next = first;
    first->next = second;
    second->next = NULL;

    cout << "Linkedlist before sorting" << endl;
    traversal(head);

    // Sorting the linked list
    bubbleSort(head);

    cout << "\nLinkedlist after sorting" << endl;
    traversal(head);

    return 0;
}
