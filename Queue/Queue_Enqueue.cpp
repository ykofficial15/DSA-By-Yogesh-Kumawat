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
int main(){
    struct node *s=new struct node;
    s->size=5;
    s->f=-1;
    s->r=-1;
    s->arr=new int[s->size];
    isEmpty(s);
    isFull(s);
    push(s,10);
     push(s,10);
      push(s,10);
      push(s,10);
     push(s,10);
      push(s,10);
    
    return 0;
}