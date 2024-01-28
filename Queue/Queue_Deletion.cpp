#include<iostream>
using namespace std;
struct node{
    int size;
    int *arr;
    int f;
    int r;
};
bool isEmpty(struct node *ptr)
{
    return ptr->f==ptr->r;
}
bool isFull(struct node *ptr)
{
    return ptr->r==ptr->size-1;
}
void push(struct node *ptr,int data)
{
    if(isFull(ptr))
    {
        cout<<"Queue is Full can't push"<<endl;
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=data;
        cout<<ptr->arr[ptr->r]<<" pushed"<<endl;
    }
}
void pop(struct node *ptr)
{
    if(isEmpty(ptr)){
        cout<<"Queue is Empty can't pop"<<endl;
        ptr->f=-1;
        ptr->r=-1;
    }
    else{
        ptr->f++;
        cout<<ptr->arr[ptr->f]<<" popped"<<endl;
    }
}
int main(){
    struct node *s=new struct node;
    s->size=5;
    s->f=-1;
    s->r=-1;
    s->arr=new int[s->size];
    isEmpty(s);
    isFull(s);
    push(s,10);
     push(s,20);
      push(s,30);
      push(s,40);
     push(s,50);
      push(s,60);
    pop(s);
        pop(s);
            pop(s);
                pop(s);
                    pop(s);
                        pop(s);
    return 0;
}