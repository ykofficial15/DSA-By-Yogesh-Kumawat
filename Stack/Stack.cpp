#include<iostream>
using namespace std;
struct node{
  int size;
  int *arr;
  int top;
};

void isFull(struct node *ptr)
{
  if(ptr->top==ptr->size)
  {
    cout<<"stack is full"<<endl;
  }
  else{
    cout<<"stack is empty"<<endl;
  }
}

struct node *insertion(struct node *ptr, int val)
{
  ptr->top++;
  ptr->arr[ptr->top]=val;
  return ptr;
}

void traversal(struct node *ptr)
{
  for(int i=0;i<=ptr->top;i++)
  {
  cout<<ptr->arr[i]<<" ";
  }
}
int main(){
    struct node *s=new node;
    s->top=-1;
    s->size=10;
    s->arr=(int *)malloc(s->size*sizeof(int));
    s=insertion(s,10);
    s=insertion(s,20);
    traversal(s);
  return 0;
}

// today i am having fever so i am just commiting nothing