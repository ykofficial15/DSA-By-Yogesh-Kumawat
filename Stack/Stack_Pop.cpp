#include<iostream>
using namespace std;
struct node{
  int size;
  int *arr;
  int top;
};

int isEmpty(struct node *ptr)
{
  if(ptr->top==-1)
  {
    return 1;
  }
  else{
    return 0;
  }
}

int isFull(struct node *ptr)
{
  if(ptr->top==ptr->size-1)
  {
    return 1;
  }
  else{
    return 0;
  }
}

void push(struct node *ptr, int data)
{
    if(isFull(ptr))
    {
        cout<<"stack is overflow can't push"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=data;
        cout<<ptr->arr[ptr->top]<<" data pushed "<<endl;
    }
}

void popped(struct node *ptr)
{
    if(isEmpty(ptr))
    {
        cout<<"stack underflow can't pop"<<endl;
    }
    else{
        cout<<ptr->arr[ptr->top]<<" data popped"<<endl;
        ptr->top--;
    }

}

int main(){
  struct node *s=(struct node*)malloc(sizeof(struct node));
  s->size=3;
  s->top=-1;
  s->arr=(int *)malloc(s->size*sizeof(int));
  push(s,10);
  push(s,20);
  push(s,30);
  push(s,40);
  popped(s);
  popped(s);
  popped(s);
  popped(s);
  return 0;
}